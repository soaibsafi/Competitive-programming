# -*- coding: utf-8 -*-
"""
Created on Sat Sep 26 17:23:56 2020

@author: Soaib
Problem: Set .symmetric_difference() Operation
Link: https://www.hackerrank.com/challenges/py-set-symmetric-difference-operation/problem
"""
n = int(input())
ns = set(map(int, input().split()))

b = int(input())
bs = set(map(int, input().split()))

print(len(ns.symmetric_difference(bs)))
