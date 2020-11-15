# -*- coding: utf-8 -*-
"""
Created on Sun Nov 15 21:06:27 2020

@author: Soaib
"""
import re
c = '[qwrtypsdfghjklzxcvbnm]'
a = re.findall('(?<=' + c +')([aeiou]{2,})' + c, input(), re.I)
print('\n'.join(a or ['-1']))