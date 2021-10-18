#!/usr/bin/python
# -*- coding: UTF-8 -*-

a = [0,1,2,3,4,5,6,7,8,9]
b = [77,5,5,22,13,55,97,4,796,1,0,9]
c = []
d = []
e = []

ub=set(b)
for i in ub:
	for j in a:
		if i==j:
			c.append(i);


for i in ub:
	int check=0
	for j in c:
		if i==j:
			check=1
	if check==0:
		d.append(i);
e=c+d

print c,d,e