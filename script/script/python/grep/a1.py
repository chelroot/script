#!/usr/bin/python3
# -*- coding: utf-8 -*-

import sys, os

inp = open('/etc/passwd')

#inp = file('/etc/passwd')
for line in inp:
     line = line[:-1]
     print(line)


import sys
inf = open('/etc/passwd')
for line in inf:
    sys.stdout.write(line)

#if line.startswith():
#    print(line)