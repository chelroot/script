#! /usr/bin/env python
# coding: utf-8

import time, serial


name=raw_input("Input:")

ser = serial.Serial("/dev/ttyACM1")
ser.baudrate = 115200
ser.write(name) #отправляем

filename = 'GPS-%4d-%02d-%02d-%02d-%02d-%02d.csv' % time.localtime()[0:6]

f = open(filename, 'w')

serial.flushInput()

while True:
    if (serial.inWaiting() > 0):
#        input = serialFromArduino.read(1)
#        print(ord(input))

#ser.write(name) #отправляем

#filename = 'GPS-%4d-%02d-%02d-%02d-%02d-%02d.csv' % time.localtime()[0:6]

#f = open(filename, 'w')



#ser.write(name) #отправляем

print ser.readline() #получаем ответ от ардуино
 # line = ser.readline()
#  f.write(line)
#  print line,

