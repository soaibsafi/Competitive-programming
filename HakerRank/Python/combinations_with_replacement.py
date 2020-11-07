# -*- coding: utf-8 -*-
"""
Created on Fri Oct  9 19:10:37 2020

@author: Soaib
Problem: itertools.combinations_with_replacement()
Link: https://www.hackerrank.com/challenges/itertools-combinations-with-replacement/problem
"""
from itertools import combinations_with_replacement
S, k = input().split()
combination = list(combinations_with_replacement(sorted(S), int(k)))

for i in combination:
    print(''.join(i))