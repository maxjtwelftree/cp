class Solution:
    def getDescentPeriods(self, prices: List[int]) -> int:
        dp=[0 for i in range(len(prices))] 
        dp[0] = 1

        for i in range(1,len(prices)):
            if prices[i]+1 == prices[i-1]:
                dp[i] += dp[i-1]
            dp[i] += 1

        return sum(dp)
