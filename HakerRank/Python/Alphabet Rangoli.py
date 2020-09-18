# -*- coding: utf-8 -*-
"""
Created on Fri Sep 18 20:25:27 2020
@author: Soaib
Problem: Alphabet Rangoli
Link: https://www.hackerrank.com/challenges/alphabet-rangoli/problem
"""
import string
def print_rangoli(size):
    alpha = string.ascii_lowercase
    L = []
    for i in range(n):
        s = "-".join(alpha[i:n])
        L.append((s[::-1]+s[1:]).center(4*n-3, "-"))
    print('\n'.join(L[:0:-1]+L))
    
if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)
    