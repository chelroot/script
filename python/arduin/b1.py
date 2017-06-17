#! /usr/bin/env python
# coding: utf-8

import time, serial#, datetime
from datetime import datetime

ser = serial.Serial("/dev/ttyACM0")
ser.baudrate = 115200

d101 = 101
d111 = 111
d121 = 121
d131 = 131
d141 = 141
d151 = 151
d161 = 161
d171 = 171
d181 = 181
d191 = 191
d201 = 201
d211 = 211
d301 = 301
d311 = 311
d321 = 321
d331 = 331
d341 = 341
d351 = 351
d361 = 361
d371 = 371
d381 = 381
d391 = 391
d401 = 401
d411 = 411

a01 = 1
a02 = 1
a03 = 1
a04 = 1
a05 = 1
a06 = 1
d111111 = 111111

t01 = open('/home/vova/python/arduin/t01.txt', 'a')
t02 = open('/home/vova/python/arduin/t02.txt', 'a')
t03 = open('/home/vova/python/arduin/t03.txt', 'a')
t04 = open('/home/vova/python/arduin/t04.txt', 'a')
t05 = open('/home/vova/python/arduin/t05.txt', 'a')
t06 = open('/home/vova/python/arduin/t06.txt', 'a')

while True :
 now = datetime.now()
 line = ser.readline()
 line1 = int(line)
 if line1 == d101:
  print("01"),
  a01 = 0
 if line1 == d111:
  print("02"),
  a02 = 0
 if line1 == d121:
  print("03"),
  a03 = 0
 if line1 == d131:
  print("04"),
  a04 = 0
 if line1 == d141:
  print("05"),
  a05 = 0
 if line1 == d151:
  print("06"),
  a06 = 0

 if line1 == d111111:
#  print("   "),
#  print (now)
  if a01 == 1:
   print("1"),
   t01.write("   ")
   t01.write(str(now))
   t01.write('\n')

  if a02 == 1:
   print("2"),
   t02.write("   ")
   t02.write(str(now))
   t02.write('\n')

  if a03 == 1:
   print("3"),
   t03.write("   ")
   t03.write(str(now))
   t03.write('\n')

  if a04 == 1:
   print("4"),
   t04.write("   ")
   t04.write(str(now))
   t04.write('\n')

  if a05 == 1:
   print("5"),
   t05.write("   ")
   t05.write(str(now))
   t05.write('\n')

  if a06 == 1:
   print("6"),
   t06.write("   ")
   t06.write(str(now))
   t06.write('\n')

  print("   "),
  print(now)

  a01 = 1
  a02 = 1
  a03 = 1
  a04 = 1
  a05 = 1
  a06 = 1

