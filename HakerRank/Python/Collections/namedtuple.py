# -*- coding: utf-8 -*-
"""
Created on Tue Oct  6 21:25:06 2020

@author: Soaib
Probnlem: Collections.namedtuple()
Link: https://www.hackerrank.com/challenges/py-collections-namedtuple/problem
"""
from collections import namedtuple
N, student = int(input()), namedtuple('Student', input().split())
sp = [student(*input().split()) for _ in range(N)]
print('%.2f' %(sum([int(Student.MARKS) for Student in sp])/N))
