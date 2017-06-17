#!/usr/bin/env python3



import time, serial

#name=raw_input("input:")

port = "/dev/ttyACM0"
ser = serial.Serial(port,115200)

#ser.write(name) #отправляем

#serialFromArduino.write(name) #отправляем
#serialFromArduino.flushInput()
#serialFromArduino.write(name) #отправляем
while True:
    if (ser.inWaiting() > 0):
#        serialFromArduino.write(name) #отправляем
#serialFromArduino.write(name) #отправляем
        input = ser.read(1)
        print(ord(input))
#serialFromArduino.write(name) #отправляем

##print(str(ord(input)) + " = the ASCII character "  + input)