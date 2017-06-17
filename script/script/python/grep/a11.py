#!/usr/bin/python3
# -*- coding: utf-8 -*-

import sys, os

inf = open('/etc/passwd')

for line in inf:

 (user, _, uid, _, gecos, _, _) = line.split(':')
 if int(uid) < 10:
    print (user, uid, gecos)
    


#inp = file('/etc/passwd')
#for line in inp:
#     line = line[:-1]
#     print(line)



#inf = open('/etc/passwd')
#for line in inf:
#    sys.stdout.write(line)

#if line.startswith():
#    print(line)