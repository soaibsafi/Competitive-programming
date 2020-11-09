# -*- coding: utf-8 -*-
"""
Created on Mon Nov  9 17:21:22 2020

@author: Soaib
Problem: Arrays
Link: https://www.hackerrank.com/challenges/np-arrays/problem
"""
import numpy as np

def arrays(arr):
    t = np.array(arr, float)
    return t[-1::-1]

arr = input().strip().split(' ')
result = arrays(arr)
print(result)