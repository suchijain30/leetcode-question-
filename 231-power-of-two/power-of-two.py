class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        # while n%2 ==0:
        #     n = n//2
        # return n==1
        
        if n<=0:
            return False
        if n==1:
            return True
        if n%2!=0:
            return False
        
        # recursive case
        return self.isPowerOfTwo(n//2)
        
        