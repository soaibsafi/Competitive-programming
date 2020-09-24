# -*- coding: utf-8 -*-
"""
Created on Thu Sep 24 16:02:02 2020

@author: Soaib
Problem: Polar Coordinates
Link: https://www.hackerrank.com/challenges/polar-coordinates/problem
"""
import cmath
n = complex(input())
print(abs(complex(n)))
print(cmath.phase(n))