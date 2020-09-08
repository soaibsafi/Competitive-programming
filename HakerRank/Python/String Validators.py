# -*- coding: utf-8 -*-
"""
Created on Tue Sep  8 20:46:58 2020
@author: Soaib
Problem: String Validators
Link: https://www.hackerrank.com/challenges/string-validators/problem
"""
if __name__ == '__main__':
    s = input()
    
    alnum = alpha = digit = lower = upper = False
    for i in range(len(s)):
        if s[i].isalnum():
            alnum = True
        if s[i].isalpha():
            alpha = True
        if s[i].isdigit():
            digit = True
        if s[i].islower():
            lower = True
        if s[i].isupper():
            upper = True
                   
    print(alnum)
    print(alpha)
    print(digit)
    print(lower)
    print(upper)
    