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
import unittest
from multiprocessing import Pool
import expressapi as EAPI

_LOG_FILE = 'logs/test.log'

def getHTTPOpener():
    urllib2.socket.setdefaulttimeout(15)
    cookieJar = cookielib.CookieJar()
    context = ssl._create_unverified_context()

    return urllib2.build_opener(
        urllib2.HTTPCookieProcessor(cookieJar),
        urllib2.HTTPSHandler(context=context)
    )


class EAPIBasicTestCase(unittest.TestCase):
    def setUp(self):
        self.opener = getHTTPOpener()
        EAPI.loadAEConfig('config.json')


    def tearDown(self):
        pass


    def test_searchCategory(self):
        cid = 200000662
        r = EAPI.searchCategory(None, 0, self.opener, 0, 0, cid)
        self.assertEqual(r['name'], 'Jackets & Coats')


    def test_searchMain(self):
        cid = 200003478
        r = EAPI.searchMain(None, 0, self.opener, cid, 0, 20)
        self.assertIsNotNone(r)


    def test_getWholeProductDetail_withoutLogin(self):
        productId = 32805300199
        timeZone = 'GMT+08:00'
        r = EAPI.getWholeProductDetail(None, self.opener, productId, timeZone)
        self.assertIsNotNone(r)


class EAPIMemberLoginTestCase(unittest.TestCase):
    def setUp(self):
        self.opener = getHTTPOpener()
        EAPI.loadAEConfig('config.json')


    def test_memberLogin(self):
        account = 'dashixiong.lee@gmail.com'
        password = 'rqrLRL@372424'
        needRefreshToken = True
        r = EAPI.memberLogin(
            None, 0, self.opener, account, password, needRefreshToken
        )
        self.assertIsNotNone(r)
        self.assertEqual(r['accountId'], 1664535863)


class EAPIMemberTestCase(unittest.TestCase):
    def setUp(self):
        self.opener = getHTTPOpener()
        EAPI.loadAEConfig('config.json')
        account = 'dashixiong.lee@gmail.com'
        password = 'rqrLRL@372424'
        needRefreshToken = True
        r = EAPI.memberLogin(
            None, 0, self.opener, account, password, needRefreshToken
        )


    def tearDown(self):
        pass


    def test_getWholeProductDetail_withLogin(self):
        productId = 32805300199
        timeZone = 'GMT+08:00'
        r = EAPI.getWholeProductDetail(None, self.opener, productId, timeZone)
        self.assertIsNotNone(r)


if __name__ == '__main__':
    logging.basicConfig(filename = _LOG_FILE, level = logging.INFO)
    logging.getLogger().addHandler(logging.StreamHandler())
    unittest.main()
