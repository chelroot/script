#! /usr/bin/env python
# coding: utf-8

import time, serial#, datetime
from datetime import datetime

ser = serial.Serial("/dev/ttyACM0")
ser.baudrate = 115200

d110 = 100
d111 = 101
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
d220 = 300
d221 = 301
d230 = 310
d231 = 311
d240 = 320
d241 = 321
d250 = 330
d251 = 331
d260 = 340
d261 = 341
d270 = 350
d271 = 351
d280 = 360
d281 = 361
d290 = 370
d291 = 371

d111111 = 111111

while True :
 now = datetime.now()
 line = ser.readline()
 line1 = int(line)
 if line1 == d110:
  print("."),
 if line1 == d111:
  print("01"),
 if line1 == d120:
  print("."),
 if line1 == d121:
  print("02"),
 if line1 == d130:
  print("."),
 if line1 == d131:
  print("03"),
 if line1 == d140:
  print("."),
 if line1 == d141:
  print("04"),
 if line1 == d150:
  print("."),
 if line1 == d151:
  print("05"),
 if line1 == d160:
  print("."),
 if line1 == d161:
  print("06"),
 if line1 == d170:
  print("."),
 if line1 == d171:
  print("07"),
 if line1 == d180:
  print("."),
 if line1 == d181:
  print("08"),
 if line1 == d190:
  print("."),
 if line1 == d191:
  print("09"),
 if line1 == d200:
  print("."),
 if line1 == d201:
  print("10"),
 if line1 == d210:
  print("."),
 if line1 == d211:
  print("11"),
 if line1 == d300:
  print("."),
 if line1 == d301:
  print("12"),
 if line1 == d310:
  print("."),
 if line1 == d311:
  print("13"),
 if line1 == d320:
  print("."),
 if line1 == d321:
  print("14"),
 if line1 == d330:
  print("."),
 if line1 == d331:
  print("15"),
 if line1 == d340:
  print("."),
 if line1 == d341:
  print("16"),
 if line1 == d350:
  print("."),
 if line1 == d351:
  print("17"),
 if line1 == d360:
  print("."),
 if line1 == d361:
  print("19"),
 if line1 == d370:
  print("."),
 if line1 == d371:
  print("20"),

 if line1 == d111111:
  print (now)

