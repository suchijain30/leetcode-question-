class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        i=0
        j=0
        res=[]
        for i in nums:
            count =0
            for j in nums:
                if j<i:
                    count +=1
                else:
                    j +=1
            res.append(count)
            count =0
        return res         