# -*- coding: utf-8 -*-
"""
Created on Fri Oct  2 16:41:13 2020

@author: Soaib
Problem: 2D Array - DS
Link: https://www.hackerrank.com/challenges/2d-array/problem
"""
#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the hourglassSum function below.
def hourglassSum(arr):
    sum = list()
    for i in range(4):
        for j in range(4):
            sum.append(arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2])
            
    return (max(sum))

if __name__ == '__main__':
    #fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr = []

    for _ in range(6):
        arr.append(list(map(int, input().rstrip().split())))

    result = hourglassSum(arr)

    #fptr.write(str(result) + '\n')

    #fptr.close()
