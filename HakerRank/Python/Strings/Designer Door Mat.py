# -*- coding: utf-8 -*-
"""
Created on Wed Sep  9 21:00:37 2020
@author: Soaib
Problem:Designer Door Mat
Link: https://www.hackerrank.com/challenges/designer-door-mat/problem
"""
n, m = map(int,input().split())
pattern = [('.|.'*(2*i + 1)).center(m, '-') for i in range(n//2)]
print('\n'.join(pattern + ['WELCOME'.center(m, '-')] + pattern[::-1]))