# -*- coding: utf-8 -*-
"""
Created on Sat Sep 26 17:22:26 2020

@author: Soaib
Problem: Set .difference() Operation
Link: https://www.hackerrank.com/challenges/py-set-difference-operation/problem
"""
n = int(input())
ns = set(map(int, input().split()))

b = int(input())
bs = set(map(int, input().split()))

print(len(ns.difference(bs)))
