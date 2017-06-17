#! /usr/bin/python3
# coding: utf-8

import time, serial

ser = serial.Serial("/dev/ttyACM0")
ser.baudrate = 115200

#filename = /home/vova/python/33.txt

#f = open(filename, 'w')
while True :
  line = ser.readline()
 # f.write(line)
   print (line), # Запятая нужна!