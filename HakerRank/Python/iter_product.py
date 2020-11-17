# -*- coding: utf-8 -*-
"""
Created on Tue Nov 17 19:45:26 2020

@author: Soaib
"""
from itertools import product

k, m = map(int,input().split())
n = (list(map(int, input().split()))[1:] for _ in range(k))
res = map(lambda x: sum(i**2 for i in x)%m, product(*n))
print(max(res))