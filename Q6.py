#!/usr/bin/python
# -*- coding: UTF-8 -*-


nums=[]
for i in range(len(nums) - 1):
	for j in range(i + 1, len(nums)):
		if nums[i] + nums[j] == target:
			return i, j

I know that hash always has better time complexity. However if range and target limited, brute force provide idle performance.