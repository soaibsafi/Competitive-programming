# -*- coding: utf-8 -*-
"""
Created on Fri Nov 20 22:13:27 2020

@author: Soaib
"""
import re
pattern = r'(?<!^)(#(?:[\da-f]{3}){1,2})'
for i in range(0, int(input())):
    matches = re.findall(pattern, input(), re.IGNORECASE)
    for m in matches:
        print(m)