#! /usr/bin/env python
# coding: utf-8

import time, serial#, datetime
from datetime import datetime

ser = serial.Serial("/dev/ttyACM0")
ser.baudrate = 115200
#ser.flushInput()

a2 = open('/home/vova/python/gerkon/a2.txt', 'a')

line = ser.readline()
line = ser.readline()
while True :

 now = datetime.now()
 line = ser.readline()
 s0 = line[0];ss0 = int(s0)
 s1 = line[1];ss1 = int(s1)
 s2 = line[2];ss2 = int(s2)
 s3 = line[3];ss3 = int(s3)
 s4 = line[4];ss4 = int(s4)
 s5 = line[5];ss5 = int(s5)
 s6 = line[6];ss6 = int(s6)
 s7 = line[7];ss7 = int(s7)
 s8 = line[8];ss8 = int(s8)
 s9 = line[9];ss9 = int(s9)
 s10 = line[10];ss10 = int(s10)
 s11 = line[11];ss11 = int(s11)
 s12 = line[12];ss12 = int(s12)
 s13 = line[13];ss13 = int(s13)
 s14 = line[14];ss14 = int(s14)
 s15 = line[15];ss15 = int(s15)
 s16 = line[16];ss16 = int(s16)
 s17 = line[17];ss17 = int(s17)
 s18 = line[18];ss18 = int(s18)
 s19 = line[19];ss19 = int(s19)
 s20 = line[20];ss20 = int(s20)
 s21 = line[21];ss21 = int(s21)
 s22 = line[22];ss22 = int(s22)
 s23 = line[23];ss23 = int(s23)

 if ss5 == 0:
  print('5   ' + str(now) + '\n'),
  a2.write('5   ' + str(now) + '\n')
 #if ss0 == 1:
 # print("A"),
 #s = line[1]
 #s1 = int(s)
 #if s1 == 0:
 # print("b"),
 #if s1 == 1:
 # print("B"),


 print(line),

