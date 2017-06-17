#! /usr/bin/env python
# coding: utf-8

import time, serial#, datetime
from datetime import datetime

ser = serial.Serial("/dev/ttyACM0")
ser.baudrate = 115200


datch0 = 4025522772322396
datch1 = 40255123703223252
datch2 = 40255248703223121
datch3 = 121212

#filename = 'GPS-%4d-%02d-%02d-%02d-%02d-%02d.csv' % time.localtime()[0:6]

#f = open(filename, 'w')

while True :

# now = datetime.now()
 line1 = ser.readline()
 line = int(line1)
# if line1 == datch or line1 == datch2:
# print(line),
# print("datch"(ddd0)
# print("const", line)
 for iii in (datch0), (datch1), (datch2), datch3:
  if line == (iii):
#   print(line),
   print("a", iii)
#  else:
#    print("b", iii)
