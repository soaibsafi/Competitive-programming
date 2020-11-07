# -*- coding: utf-8 -*-
"""
Created on Thu Nov  5 21:02:06 2020

@author: Soaib
Problem: ginortS
Link: https://www.hackerrank.com/challenges/ginorts/problem  
"""

print(*sorted(input(), key=lambda c: (-ord(c) >> 5, c in '02468', c)), sep='')