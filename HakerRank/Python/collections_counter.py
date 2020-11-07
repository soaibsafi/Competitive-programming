# -*- coding: utf-8 -*-
"""
Created on Tue Sep 22 15:20:17 2020
@author: Soaib
Problem: collections_counter
Link: https://www.hackerrank.com/challenges/collections-counter/problem
"""


if __name__ == '__main__':
    X = int(input())
    
    shoe_size = map(int, input().split())
    shoe_size = list(shoe_size)
    
    N = int(input())
    
    price = []
    for _ in range(N):
        x = map(int, input().split())
        price.append(list(x))
    
    sum = 0
    for i in range(N):
        if price[i][0] in shoe_size:
            shoe_size.pop(shoe_size.index(price[i][0]))
            sum += price[i][1]
            
    print(sum)