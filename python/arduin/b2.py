#! /usr/bin/env python
# coding: utf-8

import time, serial#, datetime
from datetime import datetime

ser = serial.Serial("/dev/ttyACM0")
ser.baudrate = 115200

d10 = 100
d11 = 110
d12 = 120
d13 = 130
d14 = 140
d15 = 150
d16 = 160
d17 = 170
d18 = 180
d19 = 190
d20 = 200
d21 = 210
d22 = 220
d23 = 230
d24 = 240
d25 = 250
d26 = 260
d27 = 270
d28 = 280
d29 = 290
d30 = 300
d31 = 310
d32 = 320
d33 = 330

a10 = 1
a11 = 1
a12 = 1
a13 = 1
a14 = 1
a15 = 1
a16 = 1
a17 = 1
a18 = 1
a19 = 1
a20 = 1
a21 = 1
a22 = 1
a23 = 1
a24 = 1
a25 = 1
a26 = 1
a27 = 1
a28 = 1
a29 = 1
a30 = 1
a31 = 1
a32 = 1
a33 = 1



d111111 = 111111

#t01 = open('/home/vova/python/arduin/t01.txt', 'a')
#t02 = open('/home/vova/python/arduin/t02.txt', 'a')
#t03 = open('/home/vova/python/arduin/t03.txt', 'a')
#t04 = open('/home/vova/python/arduin/t04.txt', 'a')
#t05 = open('/home/vova/python/arduin/t05.txt', 'a')
#t06 = open('/home/vova/python/arduin/t06.txt', 'a')

while True :
 now = datetime.now()
 line = ser.readline()
# print(line1),
 line1 = int(line)
 if line1 == d10:
  print("10"),
  a10 = 0
 if line1 == d11:
  print("11"),
  a11 = 0
 if line1 == d12:
  print("12"),
  a12 = 0
 if line1 == d13:
  print("13"),
  a13 = 0
 if line1 == d14:
  print("14"),
  a14 = 0
 if line1 == d15:
  print("15"),
  a15 = 0
 if line1 == d16:
  print("16"),
  a16 = 0
 if line1 == d17:
  print("17"),
  a17 = 0
 if line1 == d18:
  print("18"),
  a18 = 0
 if line1 == d19:
  print("19"),
  a19 = 0
 if line1 == d20:
  print("20"),
  a20 = 0
 if line1 == d21:
  print("21"),
  a21 = 0
 if line1 == d22:
  print("20"),
  a22 = 0
 if line1 == d23:
  print("21"),
  a23 = 0
 if line1 == d24:
  print("24"),
  a20 = 0
 if line1 == d25:
  print("25"),
  a21 = 0
 if line1 == d26:
  print("26"),
  a22 = 0
 if line1 == d27:
  print("27"),
  a23 = 0
 if line1 == d28:
  print("28"),
  a20 = 0
 if line1 == d29:
  print("29"),
  a21 = 0
 if line1 == d30:
  print("30"),
  a22 = 0
 if line1 == d31:
  print("31"),
  a23 = 0
 if line1 == d32:
  print("32"),
  a20 = 0
 if line1 == d33:
  print("33"),
  a21 = 0


 if line1 == d111111:
#  print("   "),
#  print (now)
#  if a01 == 1:
#   print("1"),
#   t01.write("   ")
#   t01.write(str(now))
#   t01.write('\n')

#  if a02 == 1:
#   print("2"),
#   t02.write("   ")
#   t02.write(str(now))
#   t02.write('\n')

#  if a03 == 1:
#   print("3"),
#   t03.write("   ")
#   t03.write(str(now))
#   t03.write('\n')

#  if a04 == 1:
#   print("4"),
#   t04.write("   ")
#   t04.write(str(now))
#   t04.write('\n')

#  if a05 == 1:
#   print("5"),
#   t05.write("   ")
#   t05.write(str(now))
#   t05.write('\n')

#  if a06 == 1:
#   print("6"),
#   t06.write("   ")
#   t06.write(str(now))
#   t06.write('\n')

  print("   "),
  print(now)

  a01 = 1
  a02 = 1
  a03 = 1
  a04 = 1
  a05 = 1
  a06 = 1

