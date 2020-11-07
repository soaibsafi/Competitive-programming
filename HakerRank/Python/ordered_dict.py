# -*- coding: utf-8 -*-
"""
Created on Thu Oct 22 20:53:39 2020

@author: Soaib
Problem: Collections.OrderedDict()
Link: https://www.hackerrank.com/challenges/py-collections-ordereddict/problem
"""
from collections import OrderedDict
import re

d = OrderedDict()
for _ in range(int(input())):
    item, space, quantity = input().rpartition(' ')
    d[item] = d.get(item, 0) + int(quantity)
for item, quantity in d.items():
    print(item, quantity)