# -*- coding: utf-8 -*-
"""
Created on Mon Nov  9 17:42:32 2020

@author: Soaib
Problem: Shape and Reshape
Link: https://www.hackerrank.com/challenges/np-shape-reshape/problem
"""
import numpy as np

print(np.array(input().split(), np.dtype('i4')).reshape((3,3)))
