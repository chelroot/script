#! /usr/bin/env python
# coding: utf-8

import time, serial#, datetime
from datetime import datetime

ser = serial.Serial("/dev/ttyACM0")
ser.baudrate = 115200


datch = 100
datch2 = 101

#filename = 'GPS-%4d-%02d-%02d-%02d-%02d-%02d.csv' % time.localtime()[0:6]

#f = open(filename, 'w')

while True :

# now = datetime.now()
 line = ser.readline()
 line1 = int(line)
 if line1 == datch or line1 == datch2:
  print(line),
  print("aaaa")
  if line1 == datch2:
   print(line),
   print("bbb")




