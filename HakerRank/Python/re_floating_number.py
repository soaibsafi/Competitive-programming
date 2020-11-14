# -*- coding: utf-8 -*-
"""
Created on Sat Nov 14 18:05:47 2020

@author: Soaib
"""
import re
for _ in range(int(input())):
    n = input()
    pattern = r'[+-]?\d*[.]\d*$'
    print(bool((re.match(pattern, n))))
