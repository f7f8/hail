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
import time
import hmac
import hashlib
import signal
from StringIO import StringIO

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

def loadAEConfig(path):
    global _AECONFIG
    _AECONFIG = json.load(path)
    pass

def buildCommonParams():
    global _AECONFIG
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


def requestAEAPI(opener, api, params, refer = None):
    global _AECONFIG
    url = '%s%s' % (_AECONFIG['api']['host'], api)
    secret = _AECONFIG['security']['appSecret']
    data = buildCommonParams()
    data.update(params)
    data['_aop_signature'] =  signRequest(api, data, secret)
    response = getResponse(opener, url, data)
    return json.loads(response) if response else None


def searchCategory(callback, retries, depthFrom, depthTo, opener, cid, parent = None):
    global _AECONFIG
    api = _AECONFIG['api']['interfaces']['search.category']
    params = {'id': cid}

    j = requestAEAPI(opener, api, params)
    r = 0
    while j is None:
        if r >= retries:
            return None

        if r > 0:
            logging.warn('retry %d times' % r)

        j = requestAEAPI(opener, api, params)
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


