# -*- coding: utf-8 -*-
"""
Created on Mon Sep 28 17:56:49 2020

@author: Soaib
Problem: Check Subset
Link: https://www.hackerrank.com/challenges/py-check-subset/problem
"""
T = int(input())
for _ in range(T):
    a, A, b, B = int(input()), set(map(int, input().split())), int(input()), set(map(int, input().split()))
    print(A.issubset(B))