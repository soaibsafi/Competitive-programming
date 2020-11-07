# -*- coding: utf-8 -*-
"""
Created on Sat Sep 26 16:45:45 2020

@author: Soaib
Problem: Set .add()
Link: https://www.hackerrank.com/challenges/py-set-add/problem
"""
country = int(input())
county_set = set()
[county_set.add(input()) for _ in range(country)]
print(len(county_set))
