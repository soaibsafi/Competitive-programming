# -*- coding: utf-8 -*-
"""
Created on Mon Sep 28 19:12:55 2020

@author: Soaib
Problem:Check Strict Superset
Link: https://www.hackerrank.com/challenges/py-check-strict-superset/problem
"""
A, n, l = set(map(int, input().split())), int(input()), list()
for _ in range(n):
    s = set(map(int, input().split()))
    l.append(A.issuperset(s))
print(all(l))
