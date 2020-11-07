# -*- coding: utf-8 -*-
"""
Created on Fri Nov  6 19:25:41 2020

@author: Soaib
Problem: Zipped!
Link: https://www.hackerrank.com/challenges/zipped/problem
"""
sub = []
n, x = map(int, input().split())
for _ in range(x):
    s = list(map(float, input().split()))
    sub.append(s)

for i in zip(*sub):
    print(sum(i)/x)
