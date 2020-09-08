# -*- coding: utf-8 -*-
"""
Created on Tue Sep  8 20:21:03 2020
@author: Soaib
Problem:Find a string
Link: https://www.hackerrank.com/challenges/find-a-string/problem
"""
def count_substring(string, sub_string):
    count = 0
    j = 0
    sl = len(string)
    for i in range(sl):
        t = string.find(sub_string, j, sl)
        if t>=0:
            count +=1
            j = t+1
    return count 

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    count = count_substring(string, sub_string)
    print(count)
    
        