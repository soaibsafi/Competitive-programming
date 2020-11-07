# -*- coding: utf-8 -*-
"""
Created on Sat Oct 17 23:41:16 2020

@author: Soaib
Problem: Incorrect Regex
Link: https://www.hackerrank.com/challenges/incorrect-regex/problem
"""
import re
n = int(input())
for _ in range(n):
    x = input()
    try:
        re.compile(x)
        print('True')
    except re.error:
        print('False')