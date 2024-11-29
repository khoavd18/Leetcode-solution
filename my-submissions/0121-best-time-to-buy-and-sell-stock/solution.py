class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        if n==0:
            return 0
        dp = [0] * n
        m = prices[0]
        for i in range(n):
            m = min(m,prices[i])
            dp[i] = prices[i] - m
        return max(dp)
