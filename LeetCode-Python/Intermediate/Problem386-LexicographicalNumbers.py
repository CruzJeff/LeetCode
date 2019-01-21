<<<<<<< HEAD
"""
Given an integer n, return 1 - n in lexicographical order.

For example, given 13, return: [1,10,11,12,13,2,3,4,5,6,7,8,9].

Please optimize your algorithm to use less time and space. The input size may be as large as 5,000,000.


"""

class Solution:
    def lexicalOrder(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        
        lex = []
        
        for x in range(1,n+1):
            lex.append(str(x))
        
=======
"""
Given an integer n, return 1 - n in lexicographical order.

For example, given 13, return: [1,10,11,12,13,2,3,4,5,6,7,8,9].

Please optimize your algorithm to use less time and space. The input size may be as large as 5,000,000.


"""

class Solution:
    def lexicalOrder(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        
        lex = []
        
        for x in range(1,n+1):
            lex.append(str(x))
        
>>>>>>> 81c1eb7770902652de78b7c93f0c81113d4a34e6
        return [int(i) for i in sorted(lex)]