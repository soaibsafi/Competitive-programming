# -*- coding: utf-8 -*-
"""
Created on Sat Nov 14 18:21:21 2020

@author: Soaib
"""
regex_pattern = r"[.,]+"	# Do not delete 'r'.

import re
print("\n".join(re.split(regex_pattern, input())))