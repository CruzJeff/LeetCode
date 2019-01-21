class Solution:
    def firstMissingPositive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        
        x = 1
        
        for num in range(len(nums)+1):
            if x not in nums:
                return x
            x += 1
                 
