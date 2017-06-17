#! /usr/bin/env python
# coding: utf-8

import time, serial

ser = serial.Serial("/dev/ttyACM0")
ser.baudrate = 115200

filename = 'GPS-%4d-%02d-%02d-%02d-%02d-%02d.csv' % time.localtime()[0:6]

f = open(filename, 'w')

while True :
  line = ser.readline()
  f.write(line)
  print line,

