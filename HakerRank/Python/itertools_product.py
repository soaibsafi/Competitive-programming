# -*- coding: utf-8 -*-
"""
Created on Mon Sep 21 19:56:56 2020

@author: Soaib
Problem: itertools.product()
Link: https://www.hackerrank.com/challenges/itertools-product/problem
"""

from itertools import product

if __name__ == '__main__':
    A = map(int, input().split())
    A = list(A)
    
    B = map(int, input().split())
    B = list(B) 
    
    print(*list(product(A, B)))
    