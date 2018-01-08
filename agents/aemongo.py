#!/usr/bin/env python
# -*- coding: utf-8 -*-

import logging
from pymongo import MongoClient


def connect(uri, dbname):
    global _DB
    _DB = MongoClient(uri)[dbname]


def updateCategory(category, parent, depth):
    global _DB

    category['parent'] = parent

    query = {'_id': category['id']}
    update = {'$set': category}
    _DB['categories'].update_one(query, update, upsert=True)


def updateProduct(product, productId, categoryId):
    global _DB

    product['categoryId'] = categoryId
    product['dummy'] = false

    query = {'_id': productId}
    update = {'$set': product}
    _DB['products'].update_one(query, update, upsert=True)


def makeProductDummy(productId, categoryId):
    global _DB

    product = {
        'categoryId': categoryId,
        'dummy': True
    }

    query = {'_id': productId}
    update = {'$set': product}
    _DB['products'].update_one(query, update, upsert=True)
