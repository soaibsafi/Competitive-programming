# -*- coding: utf-8 -*-
"""
Created on Wed Nov 25 21:26:37 2020

@author: Soaib
"""
import sys
from html.parser import HTMLParser

class P(HTMLParser):
  def handle_comment(self, data):
      c = 'Multi' if '\n' in data else 'Single'
      print('>>> {}-line Comment\n{}'.format(c, data.rstrip()))
      
  def handle_data(self, data):
    if len(data) > 2:
      print('>>> Data\n{}'.format(data.rstrip()))

p = P()
p.feed(sys.stdin.read())