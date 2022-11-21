# -*- coding: utf-8 -*-
"""
Created on Sun Nov 20 21:52:20 2022

@author: Akshay
"""

#Non Recursive Program

nterms = int(input("Enter no of terms: "))
n1, n2 = 0, 1
count = 0
if nterms <= 0:
 print("Please enter a positive integer")
elif nterms == 1:
 print("Fibonacci sequence upto",nterms,":")
 print(n1)
else:
 print("Fibonacci sequence:")
 while count < nterms:
  print(n1)
 nth = n1 + n2
 n1 = n2
 n2 = nth
 count += 1