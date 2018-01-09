#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import os
import argparse
import logging
import urllib2
import ssl
import cookielib
import json
import time
from datetime import datetime
import pika
import pymongo
import signal
from multiprocessing import Pool
import expressapi as EAPI
import aemongo as MONGO


_LOG_FILE = 'crawler.log'
_QTOPICS = None
_QCON = None
_QCH = None
_HTTPOPENER = None
_PAGE_LENGTH = 20
_APPCONFIG = None


def queueSearchCategory(categoryId, parentId, depth):
    global _QCH
    global _QTOPICS

    qt = {
        'id': categoryId,
        'parent': parentId,
        'depth': depth
    }

    _QCH.basic_publish(
        exchange='',
        routing_key=_QTOPICS['search.category']['queue'],
        body=json.dumps(qt)
    )


def queueSearchMain(categoryId, startIndex):
    global _QCH
    global _QTOPICS

    qt = {
        'id': categoryId,
        'startIndex': startIndex
    }

    _QCH.basic_publish(
        exchange='',
        routing_key=_QTOPICS['search.main']['queue'],
        body=json.dumps(qt)
    )


def queueProductDetail(productId, categoryId):
    global _QCH
    global _QTOPICS

    _QCH.basic_publish(
        exchange='',
        routing_key=_QTOPICS['product.detail']['queue'],
        body=json.dumps({
            'productId': productId,
            'categoryId': categoryId
        })
    )


def categoryFetched(id, depth, category, parent):
    if 'id' not in category:
        logging.error('[aecrawler] invalid category body of [%d]' % id)
        return

    categoryId = category['id']
    leaf = category['leaf'] if 'leaf' in category else False

    log = '[aecrawler] category [lv%d] %d --> parent:%r [leaf:%d]: %s' % (
        depth, categoryId, parent, leaf,category['name']
    )
    logging.info(log)

    MONGO.updateCategory(category, parent, depth)

    if leaf:
        return queueSearchMain(categoryId, 0)

    if 'subCategories' not in category:
        logging.warn(
            '[aecrawler] non-leaf without sub-categories: %d!' % categoryId
        )
        return

    for sub in category['subCategories']:
        subid = sub['id']
        if subid <= 0:
            continue
        queueSearchCategory(subid, categoryId, depth+1)


def categoryPageFetched(body, categoryId, startIndex, pageLength):
    items = body['items']
    if len(items) <= 0:
        return

    avlProducts = 0
    for item in items:
        if item['type'] == 'searchProduct':
            productId = item['productId']
            queueProductDetail(productId , categoryId)
            try:
                MONGO.makeProductDummy(productId , categoryId)

            except pymongo.errors.DuplicateKeyError as e:
                logging.error('[aecrawler] pymongo %s' % e)

            avlProducts += 1

    logging.info('[aecrawler] [%d-%d] products found of %d' % (
        startIndex + 1, startIndex + avlProducts + 1, categoryId
    ))

    queueSearchMain(categoryId, startIndex + avlProducts)


def qb_search_category(ch, method, properties, body):
    global _HTTPOPENER
    params = json.loads(body)
    categoryId = params['id']
    parentId = params['parent']
    depthFrom = params['depth']
    depthTo = depthFrom
    retries = 3

    EAPI.searchCategory(
        categoryFetched, retries, _HTTPOPENER,
        depthFrom, depthTo, categoryId, parentId
    )
    time.sleep(0.1)
    ch.basic_ack(delivery_tag = method.delivery_tag)


def qb_search_main(ch, method, properties, body):
    global _HTTPOPENER
    global _PAGE_LENGTH
    params = json.loads(body)
    categoryId = params['id']
    startIndex = params['startIndex']
    retries = 3

    EAPI.searchMain(
        categoryPageFetched, retries, _HTTPOPENER,
        categoryId, startIndex, _PAGE_LENGTH
    )
    time.sleep(0.1)
    ch.basic_ack(delivery_tag = method.delivery_tag)


def qc_product_detail(ch, method, properties, body):
    global _HTTPOPENER
    params = json.loads(body)
    productId = params['productId']
    categoryId = params['categoryId']
    timeZone = 'GMT+08:00'
    retries = 3

    res = EAPI.getWholeProductDetail(retries, _HTTPOPENER, productId, timeZone)
    if res:
        MONGO.updateProduct(res, productId, categoryId)

        if 'priceOption' in res:
            logging.info('[aecrawler] %d:%d --> %d:%d [$ %0.3f] - %s' % (
                productId,
                int(res['productId']),
                categoryId,
                res['categoryId'],
                res['priceOption'][0]['minAmount']['value'],
                res['subject']
            ))

        else:
            print json.dumps(res, indent=2)


    time.sleep(0.1)
    ch.basic_ack(delivery_tag = method.delivery_tag)


def qworker(task):
    global _QCH
    global _HTTPOPENER
    global _QTOPICS

    connectMongo()

    topic = task['topic']
    qname = _QTOPICS[topic]['queue']
    callback = _QTOPICS[topic]['consumer']

    _HTTPOPENER = getHTTPOpener()

    openMQChannel()
    _QCH.basic_qos(prefetch_count=1)
    _QCH.basic_consume(callback, queue=qname)
    _QCH.start_consuming()
    closeMQ()
    return (task, 'done')


def init_worker():
    signal.signal(signal.SIGINT, signal.SIG_IGN)

def startWorkers(workers, topic):
    pool = Pool(workers, init_worker)

    try:
        logging.info('[aecrawler] 启动 %d 个并行爬虫计算...' % workers)
        results = pool.map_async(
            qworker, [{'id': x, 'topic': topic} for x in range(workers)]
        ).get(0xffffffff)
        pool.close()
        pool.join()

        for r in results:
            print r

    except KeyboardInterrupt:
        logging.warn('[aecrawler] 任务强制中断！')
        pool.terminate()
        pool.join()


def startCrawler(categoryId):
    global _HTTPOPENER
    _HTTPOPENER = getHTTPOpener()
    depthFrom = 0
    depthTo = depthFrom
    retries = 3

    connectMongo()

    openMQChannel()
    EAPI.searchCategory(
        categoryFetched, retries, _HTTPOPENER, depthFrom, depthTo, categoryId
    )
    closeMQ()


def clearAll():
    global _QCH
    global _QTOPICS
    openMQChannel()

    for key, v in _QTOPICS.iteritems():
        _QCH.queue_purge(queue=v['queue'])

    closeMQ()

    logging.warn('[aecrawler] all of no dispatched tasks have been purged.')


def getHTTPOpener():
    urllib2.socket.setdefaulttimeout(15)
    cookie = cookielib.CookieJar()
    context = ssl._create_unverified_context()

    return urllib2.build_opener(
        urllib2.HTTPCookieProcessor(cookie),
        urllib2.HTTPSHandler(context=context)
    )


def openMQChannel():
    global _QCON
    global _QCH
    global _QTOPICS

    host = _APPCONFIG['rabbitmq']['host']
    port = _APPCONFIG['rabbitmq']['port']
    virtualHost = _APPCONFIG['rabbitmq']['virtual_host']
    credentials = pika.PlainCredentials(
        _APPCONFIG['rabbitmq']['credentials']['username'],
        _APPCONFIG['rabbitmq']['credentials']['password']
    )

    _QCON = pika.BlockingConnection(pika.ConnectionParameters(
        host, port, virtualHost, credentials
    ))
    _QCH = _QCON.channel()

    for key, v in _QTOPICS.iteritems():
        _QCH.queue_declare(queue=v['queue'], durable=True)


def closeMQ():
    global _QCON
    global _QCH
    _QCH.close()
    _QCON.close()


def connectMongo():
    uri = _APPCONFIG['mongodb']['uri']
    dbname = _APPCONFIG['mongodb']['database']
    MONGO.connect(uri, dbname)


if __name__ == '__main__':
    desc = 'A distributed crawler for aliexpress platform.'
    commands_help = """[start]: starting as a crawler for a category that specified by id number;
 [worker]: starting as a worker node for crawling tasks; [clear]: clear all tasks no dispatched."""
    parser = argparse.ArgumentParser(description=desc)
    parser.add_argument('command', choices=['start', 'worker', 'clear'], help=commands_help)
    parser.add_argument('-c', '--category', type=int, default=0, help='id number of category, default is root category[0].')
    parser.add_argument('-w', '--workers', type=int, default=5, help='numbers of worker threads when "worker" command taked, default [5].')
    parser.add_argument('-t', '--topic', type=str, default='search.category', help='target topic for worker, "search.category" default.')
    args = parser.parse_args()

    logging.basicConfig(filename = _LOG_FILE, level = logging.INFO)
    logging.getLogger().addHandler(logging.StreamHandler())

    reload(sys)
    sys.setdefaultencoding("utf8")

    logging.info('[aecrawler] ===========================================' )
    logging.info('[aecrawler] running at %s' % datetime.now().strftime("%Y-%m-%d %H:%M:%S.%f"))
    logging.info('[aecrawler] ===========================================' )

    _APPCONFIG = json.load(open('config.json', 'r'))
    EAPI.setConfig(_APPCONFIG['api'])

    _QTOPICS = {
        'search.category': {
            'queue': 'aecq-search-category',
            'consumer': qb_search_category
        },
        'search.main': {
            'queue': 'aecq-search-main',
            'consumer': qb_search_main
        },
        'product.detail': {
            'queue': 'aecq-product-detail',
            'consumer': qc_product_detail
        }
    }

    if args.command == 'start':
        startCrawler(args.category)
    elif args.command == 'worker':
        startWorkers(args.workers, args.topic)
    elif args.command == 'clear':
        clearAll()
