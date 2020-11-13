# -*- coding: utf-8 -*-
"""
Created on Fri Nov 13 19:40:50 2020

@author: Soaib
"""
import numpy as np
a,b = (np.array(input().split(), int) for _ in range(2))
print(np.inner(a,b), np.outer(a, b), sep='\n')
