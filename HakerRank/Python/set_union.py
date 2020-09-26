# -*- coding: utf-8 -*-
"""
Created on Sat Sep 26 17:17:01 2020

@author: Soaib
problem: Set .union() Operation
Link: https://www.hackerrank.com/challenges/py-set-union/problem
"""
n = int(input())
ns = set(map(int, input().split()))

b = int(input())
bs = set(map(int, input().split()))

print(len(ns.union(bs)))
