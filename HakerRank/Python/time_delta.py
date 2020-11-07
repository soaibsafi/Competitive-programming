# -*- coding: utf-8 -*-
"""
Created on Sun Nov  1 18:54:15 2020

@author: Soaib
Problem: Time Delta
Link: https://www.hackerrank.com/challenges/python-time-delta/problem
"""
from datetime import datetime
import dateutil.parser

for _ in range(int(input())):
    t1, t2 = dateutil.parser.parse(str(input())), dateutil.parser.parse(str(input()))
    print(int(abs(t1-t2).total_seconds()))

