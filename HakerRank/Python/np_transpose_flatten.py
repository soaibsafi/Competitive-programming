# -*- coding: utf-8 -*-
"""
Created on Mon Nov  9 17:53:04 2020

@author: Soaib
Problem: Transpose and Flatten
Link: https://www.hackerrank.com/challenges/np-transpose-and-flatten/problem
"""
import numpy as np
a = []
n, m = map(int, input().split())
for _ in range(n):
    a.append(list(map(int, input().split())))
    
arr = np.array(a)
print(np.transpose(arr))
print(arr.flatten())
