# -*- coding: utf-8 -*-
"""
Created on Sun Sep  6 16:54:08 2020
@author: Soaib
Problem: List Comprehensions
Link: https://www.hackerrank.com/challenges/list-comprehensions/problem
"""
if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    
    result = []
    for i in range(x+1):
        for j in range(y+1):
            for k in range(z+1):
                temp = [i,j,k]
                if sum(temp) != n:
                    result.append(temp)
                    
    print(result)
