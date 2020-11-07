# -*- coding: utf-8 -*-
"""
Created on Tue Sep 22 16:00:04 2020
@author: Soaib
Problem: DefaultDict Tutorial
Link: https://www.hackerrank.com/challenges/defaultdict-tutorial/problem
"""

if __name__ == '__main__':
    t = map(int, input().split())
    n,m = t
    A = []
    for _ in range(n):
        A.append(input())
    B = []
    for _ in range(m):
        B.append(input())
    
    for i, x in enumerate(B):
        flag = False
        for j, y in enumerate(A):
            if x == y:
                flag = True
                print(j+1, end=" ")
        if(flag is False):
            print(-1)
        else:
            print()
            
