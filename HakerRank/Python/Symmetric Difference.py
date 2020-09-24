# -*- coding: utf-8 -*-
"""
Created on Thu Sep 24 17:42:38 2020

@author: Soaib
Problem: Symmetric Difference
Link: https://www.hackerrank.com/challenges/symmetric-difference/problem
"""

from itertools import chain
M = int(input())
m = list(map(int, input().split()))

N = int(input())
n = list(map(int, input().split()))

ML = set(m)
NL = set(n)

res = []
res.append(list(ML.difference(NL)))
res.append(list(NL.difference(ML)))

res = list(chain.from_iterable(res))
res.sort()
for x in res:
    print(x) 