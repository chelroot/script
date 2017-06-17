#!/usr/bin/python3
# -*- coding: utf-8 -*-

import os

inf = open('/home/vova/script/script/python/grep/loga.txt')


for line in inf:
 if 'tb1' in line:
  ( _, _, _, _, _, _, _,aaa,)=line.split(' ')
print(aaa)

