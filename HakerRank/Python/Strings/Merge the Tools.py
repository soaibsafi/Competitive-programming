# -*- coding: utf-8 -*-
"""
Created on Tue Sep 22 17:21:48 2020
@author: Soaib
Problem: Merge the Tools
lINK. https://www.hackerrank.com/challenges/merge-the-tools/problem
"""

from collections import OrderedDict

def remove_duplicate(str):
    return "".join(OrderedDict.fromkeys(str))

def merge_the_tools(string, k):
    s_len = len(string)
    
    for i in range(0, s_len, k):
        str = string[i:i+k]
        print(remove_duplicate(str))
        
if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)
    