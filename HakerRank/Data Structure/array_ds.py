# -*- coding: utf-8 -*-
"""
Created on Thu Oct  1 21:48:45 2020

@author: Soaib
Problem: Arrays - DS
Link: https://www.hackerrank.com/challenges/arrays-ds/problem
"""
#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the reverseArray function below.
def reverseArray(a):
    reversedArray = list()
    for i in range(len(a)-1, -1, -1):
        reversedArray.append(a[i])
    return reversedArray


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr_count = int(input())

    arr = list(map(int, input().rstrip().split()))

    res = reverseArray(arr)

    fptr.write(' '.join(map(str, res)))
    fptr.write('\n')

    fptr.close()

