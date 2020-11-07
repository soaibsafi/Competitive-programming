# -*- coding: utf-8 -*-
"""
Created on Sun Sep  6 17:35:39 2020
@author: Soaib
Problem: Lists
Link: https://www.hackerrank.com/challenges/python-lists/problem
"""
if __name__ == '__main__':
    N = int(input())
    result = []
    for _ in range(N):
        t = input().split()
        if t[0] == 'insert':
            result.insert(int(t[1]), int(t[2]))
        elif t[0] == 'print':
            print(result)
        elif t[0] == 'remove':
            result.remove(int(t[1]))
        elif t[0] == 'append':
            result.append(int(t[1]))
        elif t[0] == 'sort':
            result.sort()
        elif t[0] == 'pop':
            result.pop()
        elif t[0] == 'reverse':
            result.reverse()