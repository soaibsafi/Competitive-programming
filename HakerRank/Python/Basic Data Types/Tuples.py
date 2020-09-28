# -*- coding: utf-8 -*-
"""
Created on Sun Sep  6 17:49:20 2020
@author: Soaib
Problem: Tuples
Link: https://www.hackerrank.com/challenges/python-tuples/problem
"""
if __name__ == '__main__':
    n = int(input())
    integer_list = map(int, input().split())
    t = tuple(integer_list)
    print(hash(t))
