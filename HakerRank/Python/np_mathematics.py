# -*- coding: utf-8 -*-
"""
Created on Fri Nov 13 18:34:15 2020

@author: Soaib
"""
import numpy as np
n, m = map(int, input().split())
a, b = (np.array([input().split() for _ in range(n)], dtype=int) for _ in range(2))
print(a+b, a-b, a*b, a//b, a%b, a**b, sep='\n')
