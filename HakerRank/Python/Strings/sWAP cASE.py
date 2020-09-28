# -*- coding: utf-8 -*-
"""
Created on Sun Sep  6 17:58:55 2020
@author: Soaib
Problem: sWAP cASE
Link: https://www.hackerrank.com/challenges/swap-case/problem
"""

""""
simple method:
    print(str.swapcase())
"""

def swap_case(s):
    result = []
    for i in s:
        if i.isupper():
           result.append(i.lower())
        elif i.islower():
            result.append(i.upper())
        else:
            result.append(i)
    return "".join(result)

if __name__ == '__main__': 
    str = input()
    print(swap_case(str))
    

