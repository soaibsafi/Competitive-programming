# -*- coding: utf-8 -*-
"""
Created on Tue Nov 17 19:22:01 2020

@author: Soaib
"""
from itertools import combinations
n, l, k = input(), input().split(), int(input())
c = list(combinations(l, k))
f = len(list(filter(lambda x: 'a' in x, c)))
print('%.3f'%(f/len(c)))
