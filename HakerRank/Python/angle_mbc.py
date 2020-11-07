# -*- coding: utf-8 -*-
"""
Created on Mon Sep 28 20:00:12 2020

@author: Soaib
Problem: Find Angle MBC
Link: https://www.hackerrank.com/challenges/find-angle/problem
"""
import math

a = int(input())
b = int(input())
print(round(math.degrees(math.atan2(a, b))), end='°')