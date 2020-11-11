# -*- coding: utf-8 -*-
"""
Created on Wed Nov 11 20:11:56 2020

@author: Soaib
"""
from collections import deque


def piling_up(sl):
    while sl:
        larger = sl.popleft() if sl[0]>sl[-1] else sl.pop()
        if not sl:
            return 'Yes'
        if sl[-1]>larger or sl[0]>larger:
            return 'No'

for i in range(int(input())):
    input()
    sl = deque(map(int, input().split()))
    print(piling_up(sl))