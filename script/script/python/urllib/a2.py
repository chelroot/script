#!/usr/bin/python3
# -*- coding: utf-8 -*-

from urllib.request import urlretrieve
import os


url = 'http://chelsi174.ru/foto/rv2.jpg'
os.chdir('/home/vova/script/python/urllib/')



urlretrieve( url, '2.jpg')



word = '/>34'
word1 = 'on'

inp = open('/var/www/html/n2.html').readlines()

    for i in iter(inp):
      if word in i:
       if word1 in i:
        urlretrieve( url, '2.jpg')
      else
