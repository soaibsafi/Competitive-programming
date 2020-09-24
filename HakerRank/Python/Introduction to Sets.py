# -*- coding: utf-8 -*-
"""
Created on Thu Sep 24 17:25:13 2020
@author: Soaib
Problem: Introduction to Sets
Problem: https://www.hackerrank.com/challenges/py-introduction-to-sets/problem
"""
def average(array):
    return sum(set(array))/len(set(array))

if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)