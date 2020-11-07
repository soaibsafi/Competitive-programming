# -*- coding: utf-8 -*-
"""
Created on Sat Nov  7 20:32:21 2020

@author: Soaib
Problem: Map and Lambda Function
Link: https://www.hackerrank.com/challenges/map-and-lambda-expression/problem
""" 
    
cube = lambda x: pow(x, 3)
def fibonacci(n):
    fib = [0,1]
    for i in range(2, n):
        fib.append(fib[i-1]+fib[i-2])
    return fib[0:n]
if __name__ == '__main__':
    n = int(input())
    print(list(map(cube, fibonacci(n))))