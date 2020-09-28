# -*- coding: utf-8 -*-
"""
Created on Tue Sep  8 19:40:20 2020
@author: Soaib
Problem: What's Your Name?
Link: https://www.hackerrank.com/challenges/whats-your-name/problem
"""
def print_full_name(a, b):
    print("Hello {0} {1}! You just delved into python.".format(a,b))

if __name__ == '__main__':
    first_name = input()
    last_name = input()
    print_full_name(first_name, last_name)