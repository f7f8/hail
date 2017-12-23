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
import signal
from multiprocessing import Pool
import expressapi as EAPI


_LOG_FILE = 'crawler.log'
_QNAME = 'aecrawler'
_QCON = None
_QCH = None
_HTTPOPENER = None
_PAGE_LENGTH = 20

def categoryFetched(depth, category, parent):
    global _QCH

    leaf = category['leaf'] if 'leaf' in category else False
    logtext = '[aecrawler] category-fetched [lv%d] %d --> parent:%r [leaf:%d]: %s' % (
        depth,
        category['id'],
        parent,
        leaf,
        category['name']
    )

    logging.info(logtext)

    qt = {
        'params': {
            'id': category['id']
        }
    }

    if leaf:
        qt['task'] = 'crawl.category'
        qt['params']['startIndex'] = 0
        _QCH.basic_publish(exchange='', routing_key=_QNAME, body=json.dumps(qt))
        return

    if 'subCategories' not in category:
        logging.warn(
            '[aecrawler] non-leaf category without sub-categories: %d!' % category['id']
        )
        return

    qt['task'] = 'search.category'
    for sub in category['subCategories']:
        subid = sub['id']
        if subid <= 0:
            continue
        qt['params']['id'] = subid
        qt['params']['parent'] = category['id']
        qt['params']['depth'] = depth + 1
        _QCH.basic_publish(exchange='', routing_key=_QNAME, body=json.dumps(qt))


def categoryPageFetched(body, categoryId, startIndex, pageLength):
    global _QCH
    items = body['items']
    if len(items) <= 0:
        return

    avlProducts = 0
    for item in items:
        if item['type'] == 'searchProduct':
            _QCH.basic_publish(
                exchange='', routing_key=_QNAME, body=json.dumps({
                    'task': 'product.detail',
                    'params': {
                        'id': item['productId']
                    }
                })
            )
            avlProducts += 1

    logging.info('[aecrawler] [%d-%d] products found of %d' % (
        startIndex + 1, startIndex + avlProducts + 1, categoryId
    ))

    _QCH.basic_publish(
        exchange='', routing_key=_QNAME, body=json.dumps({
            'task': 'crawl.category',
            'params': {
                'id': categoryId,
                'startIndex': startIndex + avlProducts
            }
        })
    )


def qhandler_search_category(params):
    global _HTTPOPENER
    categoryId = params['id']
    parentId = params['parent']
    depthFrom = params['depth']
    depthTo = depthFrom
    retries = 3

    EAPI.searchCategory(
        categoryFetched, retries, _HTTPOPENER,
        depthFrom, depthTo, categoryId, parentId
    )


def qhandler_crawl_category(params):
    global _HTTPOPENER
    global _PAGE_LENGTH
    categoryId = params['id']
    startIndex = params['startIndex']
    retries = 3

    EAPI.searchMain(
        categoryPageFetched, retries, _HTTPOPENER,
        categoryId, startIndex, _PAGE_LENGTH
    )


def qhandler_product_detail(params):
    global _HTTPOPENER
    print 'get product detail of %d' % params['id']


def qcallback(ch, method, properties, body):
    j = json.loads(body)

    if j['task'] == 'search.category':
        qhandler_search_category(j['params'])

    if j['task'] == 'crawl.category':
        qhandler_crawl_category(j['params'])

    if j['task'] == 'product.detail':
        qhandler_product_detail(j['params'])

    time.sleep(0.1)
    ch.basic_ack(delivery_tag = method.delivery_tag)


def qworker(workerId):
    global _QCH
    global _HTTPOPENER

    _HTTPOPENER = getHTTPOpener()

    openMQChannel()
    _QCH.basic_qos(prefetch_count=1)
    _QCH.basic_consume(qcallback, queue=_QNAME)
    _QCH.start_consuming()
    closeMQ()
    return (workerId, 'done')


def init_worker():
    signal.signal(signal.SIGINT, signal.SIG_IGN)

def startWorkers(workers):
    pool = Pool(workers, init_worker)

    try:
        logging.info('[aecrawler] 启动 %d 个并行爬虫计算...' % workers)
        results = pool.map_async(qworker, range(workers)).get(0xffffffff)
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

    openMQChannel()
    EAPI.searchCategory(
        categoryFetched, retries, _HTTPOPENER, depthFrom, depthTo, categoryId
    )
    closeMQ()


def clearAll():
    global _QCH
    openMQChannel()
    _QCH.queue_purge(queue=_QNAME)
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
    _QCON = pika.BlockingConnection(pika.ConnectionParameters('localhost'))
    _QCH = _QCON.channel()
    _QCH.queue_declare(queue=_QNAME)

def closeMQ():
    global _QCON
    global _QCH
    _QCH.close()
    _QCON.close()

if __name__ == '__main__':
    desc = 'A distributed crawler for aliexpress platform.'
    commands_help = """[start]: starting as a crawler for a category that specified by id number;
 [worker]: starting as a worker node for crawling tasks; [clear]: clear all tasks no dispatched."""
    parser = argparse.ArgumentParser(description=desc)
    parser.add_argument('command', choices=['start', 'worker', 'clear'], help=commands_help)
    parser.add_argument('-c', '--category', type=int, default=0, help='id number of category, default is root category[0].')
    parser.add_argument('-w', '--workers', type=int, default=5, help='numbers of worker threads when "worker" command taked, default [5].')
    args = parser.parse_args()

    logging.basicConfig(filename = _LOG_FILE, level = logging.INFO)
    logging.getLogger().addHandler(logging.StreamHandler())

    reload(sys)
    sys.setdefaultencoding("utf8")

    logging.info('[aecrawler] ===========================================' )
    logging.info('[aecrawler] running at %s' % datetime.now().strftime("%Y-%m-%d %H:%M:%S.%f"))
    logging.info('[aecrawler] ===========================================' )

    EAPI.loadAEConfig(open('config.json', 'r'))

    if args.command == 'start':
        startCrawler(args.category)
    elif args.command == 'worker':
        startWorkers(args.workers)
    elif args.command == 'clear':
        clearAll()
