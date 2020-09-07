# -*- coding: utf-8 -*-
"""
Created on Mon Sep  7 21:05:33 2020
@author: Soaib
Problem: Capitalize!
Link: https://www.hackerrank.com/challenges/capitalize/problem
"""
import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(str):
    result = [str[0].upper()]
    for i in range(1,len(str)):
        if str[i-1] == ' ':
            result.append(str[i].upper())
        else:
            result.append(str[i])
    return "".join(result) 

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()