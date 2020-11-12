# -*- coding: utf-8 -*-
"""
Created on Thu Nov 12 21:00:13 2020

@author: Soaib
"""
import numpy as np
a = tuple(map(int, input().split()))
print(np.zeros(a, np.dtype(np.int32)))
print(np.ones(a, np.dtype(np.int32)))
