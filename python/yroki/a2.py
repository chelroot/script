#! /usr/bin/env python
# coding: utf-8

import time, serial#, datetime
from datetime import datetime

ser = serial.Serial("/dev/ttyACM0")
ser.baudrate = 115200


datch0 = 121212
datch1 = 40255248703223121
datch2 = 4025522772322396
datch3 = 40255123703223252


#filename = 'GPS-%4d-%02d-%02d-%02d-%02d-%02d.csv' % time.localtime()[0:6]

#f = open(filename, 'w')
d1 = 1
d2 = 2
d3 = 3

while True :

# now = datetime.now()
 line1 = ser.readline()
 line = int(line1)
# if line1 == datch or line1 == datch2:
# print(line),
# print("aaaa")
 if line == datch1:
   print(line),
   print("datch1")
   d1 = 0
 if line == datch2:
   print(line),
   print("datch2")
   d2 = 0
 if line == datch3:
   print(line),
   print("datch3")
   d3 = 0
 if line == datch0:
   print(line),
   print("datch0")
   for iii in d1, d2, d3:
    if iii > 0:
     print iii
   d1 = 1
   d2 = 2
   d3 = 3