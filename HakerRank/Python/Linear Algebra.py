# -*- coding: utf-8 -*-
"""
Created on Sun Sep  6 17:05:05 2020
@author: Soaib
Problem: Linear Algebra
Link: https://www.hackerrank.com/challenges/np-linear-algebra/problem
"""
import numpy as np
n = int(input())
matrix = []
for _ in range(n):
    t = input().split()
    temp = list(map(float, t))
    matrix.append(temp)

result = round(np.linalg.det(matrix), 2)

print(result)
