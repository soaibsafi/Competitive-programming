# -*- coding: utf-8 -*-
"""
Created on Fri Nov 13 19:19:32 2020

@author: Soaib
"""
import numpy as np
a = np.array([input().split() for _ in range(int(input().split()[0]))], int)
print(np.mean(a, axis=1), np.var(a, axis=0), np.around(np.std(a, axis=None), decimals=11), sep='\n')

