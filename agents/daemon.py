#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import os
import argparse
import logging
import json
import time
from datetime import datetime
import pika


_LOG_FILE = 'hail-daemon.log'
_APPCONFIG = None
_QCON = None
_QCH = None
_QEXCHANGE = "aex-tasks"


def openMQChannel():
    global _QCON
    global _QCH

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
    _QCH.exchange_declare(exchange=_QEXCHANGE, exchange_type='fanout')


def closeMQ():
    global _QCON
    global _QCH
    _QCH.close()
    _QCON.close()


def qc_tasks(ch, method, properties, body):
    print json.dumps(json.loads(body), indent=2)
    ch.basic_ack(delivery_tag = method.delivery_tag)


def daemonProc():
    global _QCH
    openMQChannel()
    result = _QCH.queue_declare(exclusive=True)
    qname = result.method.queue
    _QCH.queue_bind(exchange=_QEXCHANGE, queue=qname)
    _QCH.basic_consume(qc_tasks, queue=qname)
    _QCH.start_consuming()
    closeMQ()


if __name__ == '__main__':
    logging.basicConfig(filename = _LOG_FILE, level = logging.INFO)
    logging.getLogger().addHandler(logging.StreamHandler())

    reload(sys)
    sys.setdefaultencoding("utf8")

    logging.info('[aed] ===========================================' )
    logging.info('[aed] running at %s' % datetime.now().strftime("%Y-%m-%d %H:%M:%S.%f"))
    logging.info('[aed] ===========================================' )

    _APPCONFIG = json.load(open('config.json', 'r'))

    daemonProc()
