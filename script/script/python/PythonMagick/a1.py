#! /usr/bin/env python3
# coding: utf-8

import shutil

aaa='/home/vova/script/script/python/PythonMagick/11.jpg'
bbb='/home/vova/script/script/python/PythonMagick/21.jpg'
ccc='/home/vova/script/script/python/PythonMagick/21a.jpg'
shutil.copyfile(aaa, bbb)

import PythonMagick
image = PythonMagick.Image(aaa)
image.scale('240x')
image.write(ccc)
