# -*- coding: utf-8 -*-
"""
Created on Fri Sep 25 20:17:31 2020

@author: Soaib
Problem: Calendar Module
Link: https://www.hackerrank.com/challenges/calendar-module/problem
"""
import calendar

l = map(int, input().split())
m, d, y = l
days = list(calendar.day_name)
print(days[calendar.weekday(y, m, d)].upper())
