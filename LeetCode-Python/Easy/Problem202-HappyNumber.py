'''
#CruzJeff

Problem 202. Happy Number

Write an algorithm to determine if a number is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.


Example: 19 is a happy number

12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1'''

HappyList = dict()
seen = dict()

class Solution:   
    def isHappy(self, n):
        result = 0
        if n in HappyList:
            for element in seen:
                HappyList[element] = HappyList[n]
            seen.clear()
            return HappyList[n]
        else:
            seen[n] = n
            str_n = map(int, str(n))
            for digit in str_n:
                result += digit * digit
            if result == 1:
                for element in seen:
                    HappyList[element] = True
                seen.clear()
                return True
            elif result == 4:
                for element in seen:
                    HappyList[element] = False
                seen.clear()
                return False
            else:
                return self.isHappy(result)
