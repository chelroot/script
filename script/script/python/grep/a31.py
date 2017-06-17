#!/usr/bin/python3
# -*- coding: utf-8 -*-

import sys, os

inf = open('/home/vova/script/script/python/grep/loga.txt')

#line=inf.readlines()


for line in inf:

 ( _, _, _, _, _, _, _,aaa,)=line.split(' ')
# if int(5) < 10:
 print(aaa)

