# -*- coding: utf-8 -*-
"""
Created on Wed Sep 23 16:31:25 2020

@author: Soaib
Problem: itertools.permutations
Link: https://www.hackerrank.com/challenges/itertools-permutations/problem
"""

from itertools import permutations
if __name__ == '__main__':
    s, k = input().split()
    k = int(k)
    
    p = list(permutations(s,k))
    res = [''.join(t) for t in p]
    res.sort()
    for t in res:
        print(t)
