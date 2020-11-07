# -*- coding: utf-8 -*-
"""
Created on Wed Sep 23 16:51:24 2020
@author: Soaib
Problem: itertools.combinations
Link: https://www.hackerrank.com/challenges/itertools-combinations/problem

"""
from itertools import combinations
from itertools import chain

if __name__ == '__main__':
    s, k = input().split()
    k = int(k)
          
    #find combinations for all range from 1 to k
    combination = [list(combinations(s, i)) for i in range(1, k+1)]
    
    #flattern 2D list into 1D list
    combination = list(chain.from_iterable(combination))
    
    #sot the combination tuples alphabetically and stored in a list
    res = [sorted(''.join(tuple), key=str.lower) for tuple in combination] 
    
    #join the previous list to match the output format 
    res = [''.join(i) for i in res]
    
    #sort alphabetically to match the output format 
    res.sort()
    #sort again wrt len to match the output format 
    res = sorted(res, key=len)
    
    #output
    for i in res:
        print(i)