# -*- coding: utf-8 -*-
"""
Created on Thu Nov  5 20:41:53 2020

@author: Soaib
Problem: Any or All
Link: https://www.hackerrank.com/challenges/any-or-all/problem
"""

n, l = input(), input().split()
print(all([int(i)>0 for i in l]) and any([j == j[::-1] for j in l]))
