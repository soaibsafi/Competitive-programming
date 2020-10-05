# -*- coding: utf-8 -*-
"""
Created on Mon Oct  5 22:57:02 2020

@author: Soaib
Problem: Exceptions
Link: https://www.hackerrank.com/challenges/exceptions/problem
"""
N = int(input())
for _ in range(N):
    a, b = input().split()
    try:
        print(int(a)//int(b))
    except ZeroDivisionError as e:
        print('Error Code:',e)
    except ValueError as e:
        print('Error Code:',e)