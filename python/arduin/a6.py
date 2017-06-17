#! /usr/bin/env python
# coding: utf-8

import time, serial#, datetime
from datetime import datetime

ser = serial.Serial("/dev/ttyACM1")
ser.baudrate = 115200

d100 = 100
d101 = 101
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
d180 = 180
d181 = 181
d190 = 190
d191 = 191
d200 = 200
d201 = 201
d210 = 210
d211 = 211
d300 = 300
d301 = 301
d310 = 310
d311 = 311
d320 = 320
d321 = 321
d330 = 330
d331 = 331
d340 = 340
d341 = 341
d350 = 350
d351 = 351
d360 = 360
d361 = 361
d370 = 370
d371 = 371
d380 = 380
d381 = 381
d390 = 390
d391 = 391
d400 = 400
d401 = 401
d410 = 410
d411 = 411



d111111 = 111111

while True :
 now = datetime.now()
 line = ser.readline()
 line1 = int(line)
 if line1 == d100:
  print("."),
 if line1 == d101:
  print("01"),
 if line1 == d110:
  print("."),
 if line1 == d111:
  print("02"),
 if line1 == d120:
  print("."),
 if line1 == d121:
  print("03"),
 if line1 == d130:
  print("."),
 if line1 == d131:
  print("04"),
 if line1 == d140:
  print("."),
 if line1 == d141:
  print("05"),
 if line1 == d150:
  print("."),
 if line1 == d151:
  print("06"),
 if line1 == d160:
  print("."),
 if line1 == d161:
  print("07"),
 if line1 == d170:
  print("."),
 if line1 == d171:
  print("08"),
 if line1 == d180:
  print("."),
 if line1 == d181:
  print("09"),
 if line1 == d190:
  print("."),
 if line1 == d191:
  print("10"),
 if line1 == d200:
  print("."),
 if line1 == d201:
  print("11"),
 if line1 == d210:
  print("."),
 if line1 == d211:
  print("12"),
 if line1 == d300:
  print("."),
 if line1 == d301:
  print("13"),
 if line1 == d310:
  print("."),
 if line1 == d311:
  print("14"),
 if line1 == d320:
  print("."),
 if line1 == d321:
  print("15"),
 if line1 == d330:
  print("."),
 if line1 == d331:
  print("16"),
 if line1 == d340:
  print("."),
 if line1 == d341:
  print("17"),
 if line1 == d350:
  print("."),
 if line1 == d351:
  print("18"),
 if line1 == d360:
  print("."),
 if line1 == d361:
  print("19"),
 if line1 == d370:
  print("."),
 if line1 == d371:
  print("20"),
 if line1 == d380:
  print("."),
 if line1 == d381:
  print("21"),
 if line1 == d390:
  print("."),
 if line1 == d391:
  print("22"),
 if line1 == d400:
  print("."),
 if line1 == d401:
  print("23"),
 if line1 == d410:
  print("."),
 if line1 == d411:
  print("24"),
  
 if line1 == d111111:
  print("   "),
  print (now)

