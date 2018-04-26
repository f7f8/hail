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
        "vv": "10.1.1|122|WIFI|198.11.132.100|1|2"
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
        logging.debug('[expressapi] getResponse: %s %s' % (
            url,
            '&'.join(['%s=%s' % (k, v) for k,v in data.iteritems()])
        ))
        response = opener.open(request)
        isZip = response.info().get('Content-Encoding') == 'gzip'
        return readZipResponse(response) if isZip else response.read()

    except urllib2.URLError as e:
        logging.error('[expressapi] %s' % e)
        return None

    except ssl.SSLError as e:
        logging.error('[expressapi] %s' % e)
        return None


def loadAEConfig(path):
    global _AECONFIG
    _AECONFIG = json.load(open(path, 'r'))['api']


def setConfig(value):
    global _AECONFIG
    _AECONFIG = value


def buildCommonParams():
    global _AECONFIG
    params = {
        '_aop_nonce': str(uuid.uuid4()).upper(),
        '_currency': 'USD',
        '_lang': 'en_US',
        'deviceId': _AECONFIG['security']['deviceId']
    }

    if 'accessToken' in _AECONFIG['security']:
        params['access_token'] = _AECONFIG['security']['accessToken']

    return params


def signRequest(api, params, secret):
    sortedParams = ['%s%s' % (k, v) for k,v in params.iteritems()]
    sortedParams.sort()
    s = '%s%s' % (api, ''.join(sortedParams))

    logging.debug('[expressapi] signRequest: %s' % s)

    return hmac.new(
        secret.encode('utf8'), s.encode('utf8'), hashlib.sha1
    ).hexdigest().upper()


def requestAEAPI(opener, api, params, maxRetries = 0, refer = None):
    global _AECONFIG
    url = '%s%s' % (_AECONFIG['host'], api)
    secret = _AECONFIG['security']['appSecret']
    data = buildCommonParams()
    data.update(params)
    data['_aop_signature'] =  signRequest(api, data, secret)

    retries = 0
    response = getResponse(opener, url, data)
    while response is None and retries < maxRetries - 1:
        logging.warn('[expressapi] retry(%d) get response: %s' % (retries + 1, api))
        response = getResponse(opener, url, data)
        retries += 1

    logging.debug('[expressapi] requestAEAPI: [%d attemps] %s %s' % (
        retries + 1, api,
        '&'.join(['%s=%s' % (k, v) for k,v in params.iteritems()])
    ))
    return json.loads(response) if response else None


def searchCategory(callback, retries, opener, depthFrom, depthTo, cid, parent = None):
    global _AECONFIG
    api = _AECONFIG['interfaces']['search.category']
    params = {'id': cid}

    jsr = requestAEAPI(opener, api, params, retries)
    if jsr is None or 'body' not in jsr:
        return None

    body = jsr['body']
    if (callback):
        callback(cid, depthFrom, body, parent)

    if 'subCategories' not in body or depthFrom >= depthTo:
        return body

    for sub in body['subCategories']:
        subid = sub['id']
        if subid <= 0:
            continue

        searchCategory(
            callback, retries, opener, depthFrom+1, depthTo, subid, cid
        )

    return body


def searchMain(callback, retries, opener, cid, startIndex, pageLength):
    global _AECONFIG
    api = _AECONFIG['interfaces']['search.main']
    params = {
        'cid': cid,
        's': startIndex,
        'n': pageLength,
        'bs': 'false',
        'f': 'false',
        'ms': 'N',
        'net': 'WIFI',
        'pop': 'false',
        'rtl': 'false',
        'sc': 'false',
        's1': 'MAIN',
        'scene': '1_2',
        'shpt_co': 'US'
    }

    jsr = requestAEAPI(opener, api, params, retries)
    if jsr is None or 'body' not in jsr:
        return None

    body = jsr['body']
    if (callback):
        callback(body, cid, startIndex, pageLength)

    return body


def getWholeProductDetail(retries, opener, productId, timeZone):
    global _AECONFIG
    api = _AECONFIG['interfaces']['product.getWholeProductDetail']
    params = {
        'productId': productId,
        'timeZone': timeZone
    }

    jsr = requestAEAPI(opener, api, params, retries)
    if jsr is None or 'body' not in jsr:
        return None

    return jsr['body']


def memberLogin(callback, retries, opener, account, password, needRefreshToken=True):
    global _AECONFIG
    api = _AECONFIG['interfaces']['member.login']
    params = {
        'account': account,
        'password': password,
        'needRefreshToken': needRefreshToken
    }

    jsr = requestAEAPI(opener, api, params, retries)
    if jsr is None or 'body' not in jsr:
        return None

    body = jsr['body']
    _AECONFIG['security']['accessToken'] = body['accessToken']

    if (callback):
        callback(body, account)

    return body
