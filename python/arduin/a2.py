#! /usr/bin/env python
# coding: utf-8

import time, serial#, datetime
from datetime import datetime

ser = serial.Serial("/dev/ttyACM0")
ser.baudrate = 115200

d110 = 110
d111 = 111
d120 = 120
d121 = 121
d130 = 130
d131 = 131
d140 = 140
d141 = 141
d150 = 150
d151 = 151
d160 = 160
d161 = 161
d170 = 170
d171 = 171


a2 = open('/home/vova/python/arduin/a2.txt', 'a')




while True :

 line = ser.readline()
 line1 = int(line)
 if line1 == d110:
  a2.write(str(line))
  print(line)
 if line1 == d111:
  a2.write(str(line))
  print(line)
 if line1 == d120:
  print(line)
 if line1 == d121:
  print(line)
 if line1 == d130:
  print(line)
 if line1 == d131:
  print(line)
 if line1 == d140:
  print(line)
 if line1 == d141:
  print(line)
 if line1 == d150:
  print(line)
 if line1 == d151:
  print(line)
 if line1 == d160:
  print(line)
 if line1 == d161:
  print(line)
 if line1 == d170:
  print(line)
 if line1 == d171:
  print(line)
