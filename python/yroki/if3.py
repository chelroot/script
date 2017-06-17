#! /usr/bin/env python
# coding: utf-8

import time, serial#, datetime
from datetime import datetime

ser = serial.Serial("/dev/ttyACM0")
ser.baudrate = 115200


datch = 4025522772322396
datch2 = 40255248703223121

#filename = 'GPS-%4d-%02d-%02d-%02d-%02d-%02d.csv' % time.localtime()[0:6]

#f = open(filename, 'w')

while True :

# now = datetime.now()
 line1 = ser.readline()
 line = int(line1)
# if line1 == datch or line1 == datch2:
# print(line),
# print("aaaa")
 if line == datch:
   print(line),
   print("datch")
 else:
  print('aaa')

 if line == datch2:
   print(line),
   print("datch2")

