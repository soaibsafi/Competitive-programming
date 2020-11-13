# -*- coding: utf-8 -*-
"""
Created on Fri Nov 13 19:34:21 2020

@author: Soaib
"""
import numpy as np
n =int(input())
a,b = (np.array([input().split() for _ in range(n)], int) for _ in range(2))
print(a.dot(b))
