#!/usr/bin/python3
# -*- coding: utf-8 -*-

from datetime import datetime, timedelta
#import time


a = datetime.now()
print (a)

b = datetime.strptime( "2009", "%Y" )
print (b)

c = datetime.strptime( "2009-11-12 23:18:53", "%Y-%m-%d %H:%M:%S" )
print (c)

g = datetime.strftime(datetime.now(), "%Y.%m.%d %H:%M:%S")
print (g)

gg = datetime.strftime(datetime.now(), "%d.%m")
print (gg)

ggg = datetime.strftime(datetime.now(), "%H")
print (ggg)

dmh = datetime.strftime(datetime.now() + timedelta(hours=-1), "%d.%m")
print (dmh)
print('aaa')

H = datetime.strftime(datetime.now() + timedelta(hours=-1), "%H")
print (H)

#gggg = datetime.strftime(datetime.now(), "%H") 
#ggggg = gggg + timedelta(hours=-1)
#print (ggggg)


t = datetime.now() + timedelta(days=5, hours=-5)
print (t)

tt = datetime.now() + timedelta(hours=-1)
print (tt)

ttt = datetime.strftime(datetime.now() + timedelta(hours=-1), "%H")
print (ttt)

#e = timedelta(hours=2)
#ee = ggg+e
#print (ee)