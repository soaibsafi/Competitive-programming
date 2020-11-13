# -*- coding: utf-8 -*-
"""
Created on Fri Nov 13 19:46:01 2020

@author: Soaib
"""
import numpy as np
a, x = np.array(input().split(), float), int(input())
print(np.polyval(a, x))
