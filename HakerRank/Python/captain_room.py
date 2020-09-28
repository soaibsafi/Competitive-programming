# -*- coding: utf-8 -*-
"""
Created on Mon Sep 28 17:26:05 2020

@author: Soaib
Problem:T he Captain's Room
Link: https://www.hackerrank.com/challenges/py-the-captains-room/problem
"""
        
K, room_list = int(input()), list(map(int, input().split()))
room_set = set(room_list)
print(((sum(room_set)*K - sum(room_list))) //(K-1))
