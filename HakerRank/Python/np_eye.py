# -*- coding: utf-8 -*-
"""
Created on Thu Nov 12 21:20:19 2020

@author: Soaib
"""
import numpy as np
n,m = map(int, input().split())
np.set_printoptions(legacy='1.13')
print(np.eye(n, m))
