# -*- coding: utf-8 -*-
"""
Created on Mon Nov  2 19:57:25 2020

@author: Soaib
Problem: Company Logo
Link: https://www.hackerrank.com/challenges/most-commons/problem
"""
from collections import Counter

s = Counter(input()).items()

for char, n in sorted(s, key=lambda c: (-c[1], c[0]))[:3]:
    print(char, n)