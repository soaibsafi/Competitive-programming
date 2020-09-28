# -*- coding: utf-8 -*-
"""
Created on Fri Sep 18 19:56:44 2020

@author: Soaib
Problem: String Formatting
Link: https://www.hackerrank.com/challenges/python-string-formatting/problem
"""

def print_formatted(n):
    m=(len(bin(n)[2:]))
    for i in range(1,n+1):
        decimal = str(i)
        print(decimal.rjust(m, ' '), end=' ')
        
        octal = str(oct(i)[2:])
        print(octal.rjust(m, ' '), end=' ')
        
        hexadecimal = str(hex(i)[2:].upper())
        print(hexadecimal.rjust(m, ' '), end=' ')
        
        binary = str(bin(i)[2:])
        print(binary.rjust(m, ' '))
        
        # In one line-
        # print("{0:{width}d} {0:{width}o} {0:{width}X} {0:{width}b}".format(i, width=m))

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)