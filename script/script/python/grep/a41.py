#!/usr/bin/python3
# -*- coding: utf-8 -*-

import os

ffile='/home/vova/script/script/python/grep/loga.txt'

def fun(cam):
    inf = open(ffile, 'r')
    for line in inf:
      if cam in line:
       ( _, _, _, _, _, _, _,aaa,)=line.split(' ')
       #inf.close()
       #break
    print(aaa)
    inf.close()

fun('tb1')
fun('gg1')
fun('vt1')
fun('vx1')
fun('gg2')
fun('kp1')

