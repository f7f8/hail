#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import os
import argparse
import logging
import urllib
import urllib2
import ssl
import cookielib
import gzip
import json
import uuid
import operator
import time
import hmac
import hashlib
import pika
import signal
from multiprocessing import Pool
from StringIO import StringIO

_LOG_FILE = 'crawler.log'
_AECONFIG = {}
_QNAME = 'aecrawler'
_QCON = None
_QCH = None

def printCookies(jar):
    for x in jar:
        expires = x.expires if x.expires else -1
        print('%s: %s [%d]' % (x.name, x.value, expires))


def tryGetCookie(jar, key):
    for x in jar:
        if x.name == key:
            return x

    return None


def browserHeaders():
    return {
        "Accept-Language": "zh-Hans-CN;q=1",
        "User-Agent": "AEI/122(iOS;10.1.1;Apple;iPhone)",
        "cust1": "750x1334",
        "cust2": "2:2005",
        "dia": "1664535863",
        "did": "Whv8gyhomxkDALnMb3LoGP7r",
        "dm": "iPhone",
        "model": "iPhone8,1",
        "vv": "10.1.1|122|WIFI|198.11.136.1|1|2"
    }


def readZipResponse(response):
    return gzip.GzipFile(fileobj=StringIO(response.read())).read()


def getResponse(opener, url, data=None, refer=None):
    headers = browserHeaders()

    if refer:
        headers['Referer'] = refer

    if data:
        encoded = urllib.urlencode(data)
        request = urllib2.Request(url=url, data=encoded, headers=headers)
    else:
        request = urllib2.Request(url=url, headers=headers)

    try:
        response = opener.open(request)
        isZip = response.info().get('Content-Encoding') == 'gzip'
        return readZipResponse(response) if isZip else response.read()

    except urllib2.URLError as e:
        logging.error(e)
        return None

    except ssl.SSLError as e:
        logging.error(e)
        return None


def buildCommonParams():
    return {
        '_aop_nonce': str(uuid.uuid4()).upper(),
        '_currency': 'USD',
        '_lang': 'en_US',
        'deviceId': _AECONFIG['security']['deviceId']
    }


def signRequest(api, params, secret):
    s = '%s' % api
    for k, v in sorted(params.items(), key=operator.itemgetter(0)):
       s += '%s%s' % (k, v)

    return hmac.new(
        secret.encode('utf8'), s.encode('utf8'), hashlib.sha1
    ).hexdigest().upper()


def APIRequest(opener, api, params, refer = None):
    url = '%s%s' % (_AECONFIG['api']['host'], api)
    secret = _AECONFIG['security']['appSecret']
    data = buildCommonParams()
    data.update(params)
    data['_aop_signature'] =  signRequest(api, data, secret)
    response = getResponse(opener, url, data)
    return json.loads(response) if response else None


def searchCategory(callback, retries, depthFrom, depthTo, opener, cid, parent = None):
    api = _AECONFIG['api']['interfaces']['search.category']
    params = {'id': cid}

    j = APIRequest(opener, api, params)
    r = 0
    while j is None:
        if r >= retries:
            return None

        j = APIRequest(opener, api, params)
        r += 1

    # invalid response
    if 'body' not in j:
        return None

    c = j['body']
    if (callback): callback(depthFrom, c, parent)

    if 'subCategories' not in c or depthFrom >= depthTo:
        return c

    for sub in c['subCategories']:
        subid = sub['id']
        if subid <= 0:
            continue

        searchCategory(callback, retries, depthFrom+1, depthTo, opener, subid, cid)


def init_worker():
    signal.signal(signal.SIGINT, signal.SIG_IGN)


def qhandler_search_category(params):
    opener = getHTTPOpener()
    categoryId = params['id']
    parentId = params['parent']
    depthFrom = params['depth']
    depthTo = depthFrom
    retries = 3

    searchCategory(
        categoryFetched, retries, depthFrom, depthTo,
        opener, categoryId, parentId
    )


def qcallback(ch, method, properties, body):
    j = json.loads(body)

    if j['task'] == 'search.category':
        qhandler_search_category(j['params'])

    time.sleep(0.1)
    ch.basic_ack(delivery_tag = method.delivery_tag)


def qworker(workerId):
    global _QCH
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
    opener = getHTTPOpener()
    depthFrom = 0
    depthTo = depthFrom
    retries = 3

    openMQChannel()
    searchCategory(categoryFetched, retries, depthFrom, depthTo, opener, categoryId)
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

    _AECONFIG = json.load(open('config.json', 'r'))

    if args.command == 'start':
        startCrawler(args.category)
    elif args.command == 'worker':
        startWorkers(args.workers)
    elif args.command == 'clear':
        clearAll()

