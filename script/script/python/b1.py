#!/usr/bin/python3
# -*- coding: utf-8 -*-

import os

pw = '/home/vova/script/python/'

for name in 2, 11: # 12, 21, 22, 23, 31, 32, 33:
#    print('d%s' % name)
#    n(str(i)) = ('d' +str(i))
#    print(n(i))

    de = ('d%s' % name)
    da = (pw +'d%s' % name + '.htm')
    de = open(da, 'a')
    de.write('некоторая строка')
    de.close
    print(da)