#! /usr/bin/env python
# coding: utf-8

import time, serial, os#, datetime
from datetime import datetime

ser = serial.Serial("/dev/ttyACM0")
ser.baudrate = 115200
#ser.flushInput()

a2 = open('/home/vova/iskra/a2.txt', 'a')

while True :
 now = datetime.now()
 line = ser.readline()
 line1 = int(line)

 if line1 == 210:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('01' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 211:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('01' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),

 if line1 == 220:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('02' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 221:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('02' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),

 if line1 == 230:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('03' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 231:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('03' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),

 if line1 == 240:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('04' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 241:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('04' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),

 if line1 == 250:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('05' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 251:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('05' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),

 if line1 == 260:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('06' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 261:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('06' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),

 if line1 == 270:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('07' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 271:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('07' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),

 if line1 == 280:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('08' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 281:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('08' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),

 if line1 == 290:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('09' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 291:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('09' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),

 if line1 == 300:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('10' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 301:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('10' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),




 if line1 == 410:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('11' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 411:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('11' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),

 if line1 == 420:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('12' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 421:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('12' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),

 if line1 == 430:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('13' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 431:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('13' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),

 if line1 == 440:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('14' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 441:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('14' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),

 if line1 == 450:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('15' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 451:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('15' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),

 if line1 == 460:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('16' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 461:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('16' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),

 if line1 == 470:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('17' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 471:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('17' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),

 if line1 == 480:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('18' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 481:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('18' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),

 if line1 == 490:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('19' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 491:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('19' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),

 if line1 == 500:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('20' + '  on  ' + str(now) + '\n')
  a2.close()
  print(line),
 if line1 == 501:
  a2 = open('/home/vova/iskra/a2.txt', 'a')
  a2.write('20' + '  off ' + str(now) + '\n')
  a2.close()
  print(line),



# print (now)


# print(line),

