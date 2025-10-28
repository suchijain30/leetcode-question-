class Solution(object):
    def maxProfit(self, prices):
        """
        :type prices: List[int]
        :rtype: int
        """
        max_profit =0
        buy = prices[0]
        for i in range(1 , len(prices)):
            if buy>prices[i]:   # find less day we can buy
                buy = prices[i]
            elif prices[i]-buy> max_profit:  # we can sell on the same day
                max_profit = prices[i]-buy   # highest 
        return max_profit
            


        