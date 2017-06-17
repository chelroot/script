#! /usr/bin/env python
# coding: utf-8

import time, serial#, datetime
from datetime import datetime

ser = serial.Serial("/dev/ttyACM0")
ser.baudrate = 9600
#ser.flushInput()

#ser.open()
ser.write("q")
time.sleep(1)
ser.write("a")
time.sleep(1)
ser.write("q")
time.sleep(1)
ser.write("a")
time.sleep(1)
ser.write("q")
time.sleep(1)
ser.write("a")
time.sleep(1)
ser.write("q")
time.sleep(1)
ser.write("a")
time.sleep(1)
ser.write("q")
time.sleep(1)
ser.write("a")
time.sleep(1)
ser.write("q")
time.sleep(1)
ser.write("a")
time.sleep(1)




#ser.close()

#while True :

# line = ser.readline()
# print(line),

