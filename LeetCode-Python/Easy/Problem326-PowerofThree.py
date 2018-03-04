import math
class Solution:
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n <= 0:
            return False
        else:
            k = math.log(n,3)
            return (math.ceil(k) - k < 1.0e-10)