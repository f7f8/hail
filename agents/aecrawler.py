#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import os
import logging
import urllib
import urllib2
import ssl
import cookielib
import gzip
import json
import uuid
import operator
import hmac
import hashlib
from StringIO import StringIO

_LOG_FILE = 'crawler.log'
_AECONFIG = {}

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


def searchCategory(opener, depth, cid):
    api = _AECONFIG['api']['interfaces']['search.category']
    params = {'id': cid}

    j = APIRequest(opener, api, params)
    retries = 0
    while j is None:
        if retries >= 3:
            logging.error("重试次数超过限制！")
            return None

        j = APIRequest(opener, api, params)
        retries += 1

    c = j['body']
    print '%s%d: %s' % ('    ' * depth, c['id'], c['name'])

    if 'subCategories' not in c:
        return None

    for sub in c['subCategories']:
        if sub['id'] < 0:
            continue

        if sub['leaf']:
            print '%s%d: %s' % ('    ' * (depth+1), sub['id'], sub['name'])
        else:
            searchCategory(opener, depth + 1, sub['id'])


def doCrawl():
    urllib2.socket.setdefaulttimeout(15)

    cookie = cookielib.CookieJar()
    context = ssl._create_unverified_context()

    opener = urllib2.build_opener(
        urllib2.HTTPCookieProcessor(cookie),
        urllib2.HTTPSHandler(context=context)
    )

    searchCategory(opener, 0, '0')


if __name__ == '__main__':
    if os.path.isfile(_LOG_FILE):
        os.remove(_LOG_FILE)

    logging.basicConfig(filename = _LOG_FILE, level = logging.DEBUG)
    logging.getLogger().addHandler(logging.StreamHandler())

    reload(sys)
    sys.setdefaultencoding("utf8")

    _AECONFIG = json.load(open('config.json', 'r'))

    doCrawl()
