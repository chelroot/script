#! /usr/bin/env python
# coding: utf-8

import time, serial#, datetime
from datetime import datetime

ser = serial.Serial("/dev/ttyACM0")
ser.baudrate = 115200

datch = 4025522772322396

#filename = 'GPS-%4d-%02d-%02d-%02d-%02d-%02d.csv' % time.localtime()[0:6]

#f = open(filename, 'w')

while True :

    now = datetime.now()
    line = ser.readline()
    line1 = int(line)
    if line1 == datch:
#        line = aaaa
#    print(x)
#  f.write(str(now))
#  f.write("  ")
 # f.write(sep=', ', end='. ')
#  f.write(str(now))
#  f.write(line)
#  f.write("###")
#  f.write(str(now))
 # f.write(line)
        print(line),
        print(line1)
        print(now)
#    else:
#        print('NO')





