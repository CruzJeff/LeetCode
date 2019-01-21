# -*- coding: utf-8 -*-
"""
Created on Tue Feb  6 04:26:35 2018

@author: User
"""

'''
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
'''

class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for x in range(len(nums)):
            complement = target - nums[x]
            complement_lookup = [index for index, num in enumerate(nums) if (num == complement and index != x)]
            if complement_lookup == []:
                pass
            else:
                return [x,complement_lookup[0]]
              
                    

        
            
            