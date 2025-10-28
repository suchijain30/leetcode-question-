class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        row = len(accounts)
        col = len(accounts[0])
        maxi =0
        sum =0
        for i in range(0, row):
            for j in range(0,col):
                sum = sum + accounts[i][j]
            maxi = max(maxi,sum)
            sum =0
        return maxi

        