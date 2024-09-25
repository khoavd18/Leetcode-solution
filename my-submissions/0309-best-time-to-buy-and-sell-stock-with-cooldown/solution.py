from typing import List

class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        if n == 0:
            return 0
        
        hold = [0] * n
        sell = [0] * n
        cooldown = [0] * n

        
        hold[0] = -prices[0]  
        sell[0] = 0           
        cooldown[0] = 0       
        for i in range(1, n):
            hold[i] = max(hold[i-1], cooldown[i-1] - prices[i])  
            sell[i] = hold[i-1] + prices[i]                       
            cooldown[i] = max(cooldown[i-1], sell[i-1])          

       
        max_profit = max(sell[-1], cooldown[-1])
        
        
        return max(0, max_profit)



