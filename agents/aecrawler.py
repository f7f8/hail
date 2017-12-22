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
import pika
import signal
from multiprocessing import Pool
import expressapi as EAPI

_LOG_FILE = 'crawler.log'
_QNAME = 'aecrawler'
_QCON = None
_QCH = None
_HTTPOPENER = None

def init_worker():
    signal.signal(signal.SIGINT, signal.SIG_IGN)


def qhandler_search_category(params):
    global _HTTPOPENER
    categoryId = params['id']
    parentId = params['parent']
    depthFrom = params['depth']
    depthTo = depthFrom
    retries = 3

    EAPI.searchCategory(
        categoryFetched, retries, depthFrom, depthTo,
        _HTTPOPENER, categoryId, parentId
    )


def qhandler_crawl_category(params):
    categoryId = params['id']
    print '🐞🐞🐞 %d ' % categoryId


def qcallback(ch, method, properties, body):
    j = json.loads(body)

    if j['task'] == 'search.category':
        qhandler_search_category(j['params'])

    if j['task'] == 'crawl.category':
        qhandler_crawl_category(j['params'])

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


def startWorkers(workers):
    pool = Pool(workers, init_worker)

    try:
        logging.debug('启动 %d 个并行爬虫计算...' % workers)
        results = pool.map_async(qworker, range(workers)).get(0xffffffff)
        pool.close()
        pool.join()

        for r in results:
            print r

    except KeyboardInterrupt:
        logging.warn('任务强制中断！')
        pool.terminate()
        pool.join()


def categoryFetched(depth, category, parent):
    global _QCH

    leaf = category['leaf'] if 'leaf' in category else False
    print '%s%d->%r[leaf:%d]: %s' % (
        '    ' * depth,
        category['id'],
        parent,
        leaf,
        category['name']
    )


    qt = {
        'params': {
            'id': category['id']
        }
    }

    if leaf:
        qt['task'] = 'crawl.category';
        _QCH.basic_publish(exchange='', routing_key=_QNAME, body=json.dumps(qt))
        return

    if 'subCategories' not in category:
        logging.warn(
            'non-leaf category without sub-categories: %d!' % category['id']
        )
        return

    qt['task'] = 'search.category';
    for sub in category['subCategories']:
        subid = sub['id']
        if subid <= 0:
            continue
        qt['params']['id'] = subid;
        qt['params']['parent'] = category['id'];
        qt['params']['depth'] = depth + 1;
        _QCH.basic_publish(exchange='', routing_key=_QNAME, body=json.dumps(qt))


def startCrawler(categoryId):
    global _HTTPOPENER
    _HTTPOPENER = getHTTPOpener()
    depthFrom = 0
    depthTo = depthFrom
    retries = 3

    openMQChannel()
    EAPI.searchCategory(categoryFetched, retries, depthFrom, depthTo, _HTTPOPENER, categoryId)
    closeMQ()


def clearAll():
    global _QCH
    openMQChannel()
    _QCH.queue_purge(queue=_QNAME)
    closeMQ()

    logging.info('all of no dispatched tasks have been purged.')


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

    if os.path.isfile(_LOG_FILE):
        os.remove(_LOG_FILE)

    logging.basicConfig(filename = _LOG_FILE, level = logging.WARN)
    logging.getLogger().addHandler(logging.StreamHandler())

    reload(sys)
    sys.setdefaultencoding("utf8")

    EAPI.loadAEConfig(open('config.json', 'r'))

    if args.command == 'start':
        startCrawler(args.category)
    elif args.command == 'worker':
        startWorkers(args.workers)
    elif args.command == 'clear':
        clearAll()
