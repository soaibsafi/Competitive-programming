# -*- coding: utf-8 -*-
"""
Created on Sat Sep 26 16:13:18 2020

@author: Soaib
Problem: No Idea!
Link: https://www.hackerrank.com/challenges/no-idea/problem
    
"""
n, m = map(int, input().split())

array = map(int, input().split())
array = list(array)

A = map(int, input().split())
A = list(A)
A = set(A)

B = map(int, input().split())
B = list(B)
B = set(B)

  
print(sum([(i in A) - (i in B) for i in array]))
