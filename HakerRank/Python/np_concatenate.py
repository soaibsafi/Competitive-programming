# -*- coding: utf-8 -*-
"""
Created on Thu Nov 12 20:07:56 2020

@author: Soaib
"""
import numpy as np
n, m, p = map(int, input().split())
arr1 = np.array([], np.dtype(np.int32))
arr2 =  np.array([], np.dtype(np.int32))


for _ in range(n):
    arr1 = np.append(arr1, list(map(int, input().split())))
arr1 = arr1.reshape(n,p)

for _ in range(m):
    arr2 = np.append(arr2, list(map(int, input().split())))
arr2 = arr2.reshape(m,p)

print(np.concatenate((arr1, arr2), axis=0))
