# -*- coding: utf-8 -*-
"""
Created on Sat Oct 31 20:54:50 2020

@author: Soaib
Problem: Collections.deque()
Link: https://www.hackerrank.com/challenges/py-collections-deque/problem
"""
from collections import deque

d = deque()

for _ in range(int(input())):
    com = input().split()
    getattr(d, com[0])(*[com[1]] if len(com)>1 else [])

print(*d)