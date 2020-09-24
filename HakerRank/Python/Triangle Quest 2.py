# -*- coding: utf-8 -*-
"""
Created on Thu Sep 24 17:16:57 2020

@author: Soaib
"""

"""
1 -> (10 - 1) / 9 = 1,      1 * 1     = 1
2 -> (100 - 1) / 9 = 11,    11 * 11   = 121
3 -> (1000 - 1) / 9 = 111,  111 * 111 = 12321
"""
for i in range(1, int(input())+1):
    print(int((10**i-1)/9)**2)