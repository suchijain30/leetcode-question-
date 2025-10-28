class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        start =0
        for i in range (1,len(nums)):
            if nums[i]!=nums[i-1]:
                start +=1
                nums[start]= nums[i]

        return start+1
