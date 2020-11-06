# -*- coding: utf-8 -*-
"""
Created on Fri Nov  6 19:42:47 2020

@author: Soaib
Problem: Athlete Sort
Link: https://www.hackerrank.com/challenges/python-sort-sort/problem
"""
n, m = map(int, input().split())
a = []
for _ in range(n):
    s = list(map(float, input().split()))
    a.append(s)
k = int(input())

array_sorted = sorted(a, key=lambda l:l[k])
for i in array_sorted:
    print(*i)