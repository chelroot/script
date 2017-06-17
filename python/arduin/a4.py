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
d180 = 180
d181 = 181
d190 = 190
d191 = 191
d200 = 200
d201 = 201
d210 = 210
d211 = 211
d220 = 220
d221 = 221
d230 = 230
d231 = 231
d240 = 240
d241 = 241
d250 = 250
d251 = 251
d260 = 260
d261 = 261
d270 = 270
d271 = 271
d280 = 280
d281 = 281
d290 = 290
d291 = 291





d111111 = 111111

#a2 = open('/home/vova/python/arduin/a2.txt', 'a')




while True :
 now = datetime.now()
 line = ser.readline()
 line1 = int(line)
 if line1 == d110:
 # a2.write("   ")
 # a2.write(line)
  print(line),
 if line1 == d111:
 # a2.write(str(now))
 # a2.write("   ")
  print(line),
  
 if line1 == d120:
  print(line),
 if line1 == d121:
  print(line),
 if line1 == d130:
  print(line),
 if line1 == d131:
  print(line),
 if line1 == d140:
  print(line),
 if line1 == d141:
  print(line),
 if line1 == d150:
  print(line),
 if line1 == d151:
  print(line),
 if line1 == d160:
  print(line),
 if line1 == d161:
  print(line),
 if line1 == d170:
  print(line),
 if line1 == d171:
  print(line),
 if line1 == d180:
  print(line),
 if line1 == d181:
  print(line),
 if line1 == d190:
  print(line),
 if line1 == d191:
  print(line),
 if line1 == d200:
  print(line),
 if line1 == d201:
  print(line),
 if line1 == d210:
  print(line),
 if line1 == d211:
  print(line),
 if line1 == d220:
  print(line),
 if line1 == d221:
  print(line),
 if line1 == d230:
  print(line),
 if line1 == d231:
  print(line),
 if line1 == d240:
  print(line),
 if line1 == d241:
  print(line),
 if line1 == d250:
  print(line),
 if line1 == d251:
  print(line),
 if line1 == d260:
  print(line),
 if line1 == d261:
  print(line),
 if line1 == d270:
  print(line),
 if line1 == d271:
  print(line),
 if line1 == d280:
  print(line),
 if line1 == d281:
  print(line),
 if line1 == d290:
  print(line),
 if line1 == d291:
  print(line),
   

 if line1 == d111111:
  print (now)
#  a2.write(str(now))
#  a2.write('\n')
