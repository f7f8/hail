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


_LOG_FILE = 'hail-commander.log'
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


def queueStart(workers, topic):
    global _QCH
    msg = {
        "task": {
            "command": "spawn",
            "workers": workers,
            "topic": topic,
        },
        "config": _APPCONFIG
    }
    _QCH.basic_publish(exchange=_QEXCHANGE, routing_key='', body=json.dumps(msg))


def queueStop():
    global _QCH
    msg = {
        "task": {
            "command": "stop",
        }
    }
    _QCH.basic_publish(exchange=_QEXCHANGE, routing_key='', body=json.dumps(msg))


def queueReboot():
    global _QCH
    msg = {
        "task": {
            "command": "reboot",
        }
    }
    _QCH.basic_publish(exchange=_QEXCHANGE, routing_key='', body=json.dumps(msg))


def startTasks(nodes, workers, topic):
    openMQChannel()
    queueStop()
    queueStart(workers, topic)
    closeMQ()


def stopTasks():
    openMQChannel()
    queueStop()
    closeMQ()


def rebootAll():
    openMQChannel()
    queueReboot()
    closeMQ()


if __name__ == '__main__':
    desc = 'aecrawler command console.'
    commands_help = """[start]: starting as a crawler for a category that specified by id number;
 [stop]: stop all workers of nodes."""
    parser = argparse.ArgumentParser(description=desc)
    parser.add_argument('command', choices=['start', 'stop', 'reboot'], help=commands_help)
    parser.add_argument('-n', '--nodes', type=int, default=20, help='numbers of nodes join in computing, default [20].')
    parser.add_argument('-w', '--workers', type=int, default=5, help='numbers of worker threads when "worker" command taked, default [5].')
    parser.add_argument('-t', '--topic', type=str, default='search.category', help='target topic for worker, "search.category" default.')
    args = parser.parse_args()

    logging.basicConfig(filename = _LOG_FILE, level = logging.INFO)
    logging.getLogger().addHandler(logging.StreamHandler())

    reload(sys)
    sys.setdefaultencoding("utf8")

    logging.info('[aec] ===========================================' )
    logging.info('[aec] running at %s' % datetime.now().strftime("%Y-%m-%d %H:%M:%S.%f"))
    logging.info('[aec] ===========================================' )

    _APPCONFIG = json.load(open('config.json', 'r'))

    if args.command == 'start':
        startTasks(args.nodes, args.workers, args.topic)
    elif args.command == 'stop':
        stopTasks()
    elif args.command == 'reboot':
        rebootAll()
