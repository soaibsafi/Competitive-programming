# -*- coding: utf-8 -*-
"""
Created on Sat Nov 14 18:23:52 2020

@author: Soaib
"""
import re
pattern = r'([a-zA-Z0-9])\1+'
m = re.search(pattern, input())
print(m.group(1) if m else -1)
