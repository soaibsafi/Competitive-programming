# -*- coding: utf-8 -*-
"""
Created on Sun Nov  1 19:31:56 2020

@author: Soaib
Problem: Word Order
Link: https://www.hackerrank.com/challenges/word-order/problem
"""
words = {}
for _ in range(int(input())):
    word = input()
    
    if word not in words:
        words[word] = 1
    else:
        words[word] = words[word]+1
        
print(len(words))
print(*words.values())
