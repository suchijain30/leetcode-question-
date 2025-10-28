class Solution(object):
    def runningSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        res= []
        sum =0 
        for i in nums:
            sum = sum + i
            res.append(sum)
        return res
        