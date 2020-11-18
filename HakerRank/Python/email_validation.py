# -*- coding: utf-8 -*-
"""
Created on Wed Nov 18 19:42:56 2020

@author: Soaib
"""
import re

def fun(s):
    pattern = re.compile('^[\\w-]+@[0-9a-zA-Z]+\\.[a-z]{1,3}$') 
    return pattern.match(s)

def filter_mail(emails):
    return list(filter(fun, emails))

if __name__ == '__main__':
    n = int(input())
    emails = []
    for _ in range(n):
        emails.append(input())

filtered_emails = filter_mail(emails)
filtered_emails.sort()
print(filtered_emails)