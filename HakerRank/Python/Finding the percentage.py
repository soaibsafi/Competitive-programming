# -*- coding: utf-8 -*-
"""
Created on Sun Sep  6 16:32:32 2020
@author: Soaib
Problem: Finding the percentage
Link: https://www.hackerrank.com/challenges/finding-the-percentage/problem
"""
if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    
    result = sum(student_marks[query_name])/3
    
    print('%.2f'%result)    
