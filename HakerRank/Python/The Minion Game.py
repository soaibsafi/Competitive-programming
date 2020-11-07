# -*- coding: utf-8 -*-
"""
Created on Mon Sep  7 21:04:09 2020
@author: Soaib
Problem:The Minion Game
Link: https://www.hackerrank.com/challenges/the-minion-game/problem
"""
"""
Complexity - O(n)
"""
def minion_game(str):
    vowel = ['A', 'E', 'I', 'O', 'U']
    Kevin  = 0
    Stuart  = 0
    for i in range(len(str)):
        if str[i] in vowel:
            Kevin += len(str)-i
        else:
            Stuart += len(str)-i
    
    if Kevin < Stuart:
        print('Stuart', Stuart)
    elif Kevin > Stuart:
        print('Kevin', Kevin)
    else:
        print('Draw')
        
if __name__ == '__main__':
    s = input()
    minion_game(s)


"""
Complexity - O(n^3)
"""
def allSubString(str):
    substrings = []  
    s=''
    l = len(str)
    #Stsrting Point
    for i in range(l):
        for j in range(l-i):
            x = i+j
            for k in range(j, x+1):
                s += str[k]
            substrings.append(s)
            s = ''
    return substrings            
           
    
def minion_game(str):
    s = allSubString(str)
    vowel = ['A', 'E', 'I', 'O', 'U']
    Kevin  = []
    Stuart  = []
    for i in s:
        if i[0] in vowel:
            Kevin.append(i)
        else:
            Stuart.append(i)
    
    if len(Kevin) < len(Stuart):
        print('Stuart', len(Stuart))
    elif len(Kevin) > len(Stuart):
        print('Kevin', len(Kevin))
    else:
        print('Draw')
        

