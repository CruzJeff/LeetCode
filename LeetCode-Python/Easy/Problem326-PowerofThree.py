<<<<<<< HEAD
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
=======
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
>>>>>>> 81c1eb7770902652de78b7c93f0c81113d4a34e6
            return (math.ceil(k) - k < 1.0e-10)