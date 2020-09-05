# -*- coding: utf-8 -*-
"""
Created on Sat Sep  5 19:06:50 2020
@author: Soaib
Problem: Nested Lists
Link: https://www.hackerrank.com/challenges/nested-list/problem
"""
if __name__ == '__main__':
    N = int(input())
    name_scores = []
    scores = []
    for i in range(N):
        name = input()
        score = float(input())
        temp = [name, score]
        name_scores.append(temp)
        scores.append(score)    

    scores.sort()
    scores = list(dict.fromkeys(scores))
    second_lowest = scores[1]
    names = []
    for i in name_scores:
        if i[1] == second_lowest:
            names.append(i[0])
    names.sort()
    for name in names:
        print(name)
