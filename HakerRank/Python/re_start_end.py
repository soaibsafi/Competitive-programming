# -*- coding: utf-8 -*-
"""
Created on Mon Nov 16 19:05:25 2020

@author: Soaib
"""
import re

S = input()
k = input()
pattern = re.compile(k)
r = pattern.search(S)
if not r: print ("(-1, -1)")
while r:
    print("({0}, {1})".format(r.start(), r.end() - 1))
    r = pattern.search(S,r.start() + 1)