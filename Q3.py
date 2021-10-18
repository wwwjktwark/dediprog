#!/usr/bin/python
# -*- coding: UTF-8 -*-
import numpy as np

index =np.array([0,1,2,3,4,5,6,7,8,9])
odd = np.array([])
even = np.array([])
for i in index:
    if i%2==0:
        even.append(i)
    else:
        odd.append(i)

print odd.sum-even.sum
print odd
print even