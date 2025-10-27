class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        temp = x
        digit =0 
        while(x>0):
            rem = x%10
            digit= digit*10+rem
            x = x/10
        if temp ==digit:
            return True
        else:
            return False

        