# -*- coding: utf-8 -*-
"""
Created on Sat Sep 26 16:49:20 2020

@author: Soaib
problem: Set .discard(), .remove() & .pop()
Link: https://www.hackerrank.com/challenges/py-set-discard-remove-pop/problem
"""
n = int(input())
s = set(map(int, input().split()))
N = int(input())

for _ in range(N):
    eval('s.{0}({1})'.format(*input().split()+['']))
        
print(sum(s))

x = {1,2,3,4}
print(*x)