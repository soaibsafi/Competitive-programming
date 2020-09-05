# -*- coding: utf-8 -*-
"""
Created on Sat Sep  5 18:52:24 2020
@author: Soaib
Problem: Find the Runner-Up Score!
Link: https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list/problem
"""
if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    arr = list(arr)
    arr = list(dict.fromkeys(arr))
    sorted_arr = sorted(arr)
    result = sorted_arr[-2]
print(result)