# -*- coding: utf-8 -*-
"""
Created on Fri Oct  9 19:38:26 2020

@author: Soaib
Problem: Compress the String!
Link: https://www.hackerrank.com/challenges/compress-the-string/problem
"""
from itertools import groupby
groups = list()
data = input()
[groups.append((len(list(g)),int(k))) for k, g in groupby(data)]
print(*groups)