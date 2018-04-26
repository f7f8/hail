#!/usr/bin/env python
# -*- coding: utf-8 -*-

import sys
import os
import subprocess
import shlex
import signal
import logging
import json
import time
from datetime import datetime
import pika


_LOG_FILE = 'logs/hail-daemon.log'
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


def stopCrawler():
    with open('crawler.pid', 'r') as f:
        pid = int(f.read())
        logging.info('[aed] kill process %d' % pid)

        try:
            os.kill(pid, signal.SIGTERM)

        except OSError as e:
            logging.warn(e)


def startCrawler(workers, topic):
    cmd = 'python aecrawler.py worker -w %d -t %s' % (workers, topic)
    args = shlex.split(cmd)
    subprocess.Popen(args)


def updateRepository():
    cmd = 'git pull'
    args = shlex.split(cmd)
    subprocess.Popen(args).wait()


def updateConfig(config):
    with open('config.json', 'w') as f:
        f.write(json.dumps(config, indent=2))


def reboot():
    cmd = 'sudo reboot'
    args = shlex.split(cmd)
    subprocess.Popen(args)


def qc_tasks(ch, method, properties, body):
    msg = json.loads(body)
    command = msg['task']['command']

    if command == 'reboot':
        logging.info('[aed] updating git repository...')
        updateRepository()
        logging.info('[aed] done!') 
        reboot()

    if command == 'stop':
        stopCrawler()

    elif command == 'spawn':
        logging.info('[aed] updating git repository...')
        updateRepository()
        logging.info('[aed] done!') 
        logging.info('[aed] updating configuration...')
        updateConfig(msg['config'])
        logging.info('[aed] done!')
        logging.info('[aed] starting crawlers ...')
        startCrawler(
            int(msg['task']['workers']),
            msg['task']['topic']
        )

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
