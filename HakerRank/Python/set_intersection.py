# -*- coding: utf-8 -*-
"""
Created on Sat Sep 26 17:20:38 2020

@author: Soaib
Problem: Set .intersection() Operation
Link: https://www.hackerrank.com/challenges/py-set-intersection-operation/problem
"""
n = int(input())
ns = set(map(int, input().split()))

b = int(input())
bs = set(map(int, input().split()))

print(len(ns.intersection(bs)))
