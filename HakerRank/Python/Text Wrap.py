# -*- coding: utf-8 -*-
"""
Created on Wed Sep  9 20:20:25 2020
@author: Soaib
Problem: Text Wrap
Link: https://www.hackerrank.com/challenges/text-wrap/problem
"""
import textwrap

def wrap(string, max_width):
   return "\n".join([string[i:i+max_width] for i in range(0, len(string), max_width)])
    

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
    
    
    