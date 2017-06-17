#! /usr/bin/env python
# coding: utf-8

import time, serial, os#, datetime
from datetime import datetime

ser = serial.Serial("/dev/ttyACM0")
ser.baudrate = 115200
#ser.flushInput()

a2 = open('/home/vova/python/gerkon/a2.txt', 'a')

while True :
 now = datetime.now()
 line = ser.readline()
 line1 = int(line)
 
 if line1 == 210:
  a2 = open('/home/vova/python/gerkon/a2.txt', 'a')
  a2.write('01' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 211:
  a2 = open('/home/vova/python/gerkon/a2.txt', 'a')
  a2.write('01' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),

# print (now)


# print(line),

