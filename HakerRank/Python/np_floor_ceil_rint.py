# -*- coding: utf-8 -*-
"""
Created on Fri Nov 13 18:54:59 2020

@author: Soaib
"""
import numpy as np
np.set_printoptions(sign=' ')
a = np.array(input().split(), dtype=float)

print(np.floor(a))
print(np.ceil(a))
print(np.rint(a))
