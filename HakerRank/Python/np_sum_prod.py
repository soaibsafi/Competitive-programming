# -*- coding: utf-8 -*-
"""
Created on Fri Nov 13 19:06:17 2020

@author: Soaib
"""
import numpy as np
n, m = map(int, input().split())
a = np.array([input().split() for _ in range(n)], int)
print(np.prod(np.sum(a, axis=0)))
