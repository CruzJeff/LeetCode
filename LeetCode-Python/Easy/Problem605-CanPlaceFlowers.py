<<<<<<< HEAD
#include <string>
#include <iostream>
using namespace std;

/*
CruzJeff 3/14/18
Problem 771: Jewels and Stones
You're given strings J representing the types of stones that are jewels, and S representing the stones you have. 
 Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.
"""
Suppose you have a long flowerbed in which some of the plots are planted and some are not. However, flowers cannot be planted in adjacent plots - they would compete for water and both would die.

Given a flowerbed (represented as an array containing 0 and 1, where 0 means empty and 1 means not empty), and a number n, return if n new flowers can be planted in it without violating the no-adjacent-flowers rule.

Example 1:
Input: flowerbed = [1,0,0,0,1], n = 1
Output: True

Example 2:
Input: flowerbed = [1,0,0,0,1], n = 2
Output: False

Note:
The input array won't violate no-adjacent-flowers rule.
The input array size is in the range of [1, 20000].
n is a non-negative integer which won't exceed the input array size.
"""


class Solution:
    def canPlaceFlowers(self, flowerbed, n):
        """
        :type flowerbed: List[int]
        :type n: int
        :rtype: bool
        """
        #check trivial case where n is 0
        if n == 0:
            return True
        #check smallest possible case where flowerbed is size 1
        if len(flowerbed) == 1:
            return flowerbed[0] == 0 and n == 1
        #counter to hold available spots
        available_spots = 0
        
        #loop to find all 0s in flowerbed, and check their adjacent positions for flowers
        for x in range(len(flowerbed)):
            if x == 0:
                if flowerbed[x+1] == 0:
                    available_spots += 1
                    flowerbed[x] = 1
            elif x == len(flowerbed) - 1:
                if flowerbed[x-1] == 0:
                    available_spots += 1
                    flowerbed[x] = 1
            else:
                if flowerbed[x+1] == 0 and flowerbed[x-1] == 0:
                    available_spots += 1
                    flowerbed[x] = 1
        #return
        return n <= available_spots
                    
 
=======

"""
Suppose you have a long flowerbed in which some of the plots are planted and some are not. However, flowers cannot be planted in adjacent plots - they would compete for water and both would die.

Given a flowerbed (represented as an array containing 0 and 1, where 0 means empty and 1 means not empty), and a number n, return if n new flowers can be planted in it without violating the no-adjacent-flowers rule.

Example 1:
Input: flowerbed = [1,0,0,0,1], n = 1
Output: True

Example 2:
Input: flowerbed = [1,0,0,0,1], n = 2
Output: False

Note:
The input array won't violate no-adjacent-flowers rule.
The input array size is in the range of [1, 20000].
n is a non-negative integer which won't exceed the input array size.
"""


class Solution:
    def canPlaceFlowers(self, flowerbed, n):
        """
        :type flowerbed: List[int]
        :type n: int
        :rtype: bool
        """
        #check trivial case where n is 0
        if n == 0:
            return True
        #check smallest possible case where flowerbed is size 1
        if len(flowerbed) == 1:
            return flowerbed[0] == 0 and n == 1
        #counter to hold available spots
        available_spots = 0
        
        #loop to find all 0s in flowerbed, and check their adjacent positions for flowers
        for x in range(len(flowerbed)):
            if x == 0:
                if flowerbed[x+1] == 0:
                    available_spots += 1
                    flowerbed[x] = 1
            elif x == len(flowerbed) - 1:
                if flowerbed[x-1] == 0:
                    available_spots += 1
                    flowerbed[x] = 1
            else:
                if flowerbed[x+1] == 0 and flowerbed[x-1] == 0:
                    available_spots += 1
                    flowerbed[x] = 1
        #return
        return n <= available_spots
                    
 
>>>>>>> 81c1eb7770902652de78b7c93f0c81113d4a34e6
