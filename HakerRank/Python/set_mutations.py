# -*- coding: utf-8 -*-
"""
Created on Mon Sep 28 17:05:51 2020

@author: Soaib
Problem: Set Mutations
Link: https://www.hackerrank.com/challenges/py-set-mutations/problem
"""
a = int(input())
A = set(map(int, input().split()))

N = int(input())

for _ in range(N):
    statement = input().split()
    s = set(map(int, input().split()))
    eval('A.{0}({1})'.format((statement[0]), s))

print(sum(A))    
