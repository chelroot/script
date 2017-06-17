#! /usr/bin/env python
# coding: utf-8

import time, serial, os#, datetime
from datetime import datetime

ser = serial.Serial("/dev/ttyACM0")
ser.baudrate = 115200
#ser.flushInput()

pwd1="/home/vova/iskra/a2.txt"
a2 = open(pwd1, 'a')


def mfof(n):
    a2 = open(pwd1, 'a')
    a2.write('<br />' + '%s' % n + '  off ' + str(now) + '\n'),
    a2.close()
    ser.write('1')
    a2.close()
    print(line)

def mfon(n):
    a2 = open(pwd1, 'a')
    a2.write('<br />' + '%s' % n + '  on  ' + str(now) + '\n'),
    a2.close()
    ser.write('2')
    a2.close()
    print(line)




while True :
 now = datetime.now()
# line = ser.readline()
 line = ser.read()
# line1 = int(line)
# print(line)
 if line == 'Q':  mfof(11)
 if line == 'q':  mfon(11)
 if line == 'W':  mfof(12)
 if line == 'w':  mfon(12)
 if line == 'E':  mfof(13)
 if line == 'e':  mfon(13)
 if line == 'R':  mfof(14)
 if line == 'r':  mfon(14)
 if line == 'T':  mfof(15)
 if line == 't':  mfon(15)
 if line == 'Y':  mfof(16)
 if line == 'y':  mfon(16)
###
 if line == 'U':  mfof(21)
 if line == 'u':  mfon(21)
 if line == 'I':  mfof(22)
 if line == 'i':  mfon(22)
 if line == 'O':  mfof(23)
 if line == 'o':  mfon(23)
 if line == 'P':  mfof(24)
 if line == 'p':  mfon(24)
 if line == 'A':  mfof(25)
 if line == 'a':  mfon(25)
 if line == 'S':  mfof(26)
 if line == 's':  mfon(26)
###
 if line == 'D':  mfof(31)
 if line == 'd':  mfon(31)
 if line == 'F':  mfof(32)
 if line == 'f':  mfon(32)
 if line == 'G':  mfof(33)
 if line == 'g':  mfon(33)
 if line == 'H':  mfof(34)
 if line == 'h':  mfon(34)
 if line == 'J':  mfof(35)
 if line == 'j':  mfon(35)
 if line == 'K':  mfof(36)
 if line == 'k':  mfon(36)
###
 if line == 'L':  mfof(41)
 if line == 'l':  mfon(41)
 if line == 'Z':  mfof(42)
 if line == 'z':  mfon(42)
 if line == 'X':  mfof(43)
 if line == 'x':  mfon(43)
 if line == 'C':  mfof(44)
 if line == 'c':  mfon(44)
 if line == 'V':  mfof(45)
 if line == 'v':  mfon(45)
 if line == 'B':  mfof(46)
 if line == 'b':  mfon(46)
###
 if line == 'N':  mfof(51)
 if line == 'n':  mfon(51)
 if line == 'M':  mfof(52)
 if line == 'm':  mfon(52)
 if line == '<':  mfof(53)
 if line == ',':  mfon(53)
 if line == '>':  mfof(54)
 if line == '.':  mfon(54)
 if line == '?':  mfof(55)
 if line == '/':  mfon(55)
 if line == ':':  mfof(56)
 if line == ';':  mfon(56)
###
 if line == '+':  mfof(61)
 if line == '=':  mfon(61)
 if line == '_':  mfof(62)
 if line == '-':  mfon(62)
 if line == ')':  mfof(63)
 if line == '0':  mfon(63)
 if line == '(':  mfof(64)
 if line == '9':  mfon(64)
 if line == '*':  mfof(65)
 if line == '8':  mfon(65)
 if line == '&':  mfof(66)
 if line == '7':  mfon(66)


#  print(line),





# print (now)


# print(line),

