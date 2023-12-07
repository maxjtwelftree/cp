class Solution:
    def tallestBillboard(self, rods: List[int]) -> int:
        dp = {0: 0}
        for x in rods:
            curr_dp = dp.copy()
            for y in curr_dp:
                dp[y + x] = max(dp.get(y + x, 0), curr_dp[y])
                dp[abs(y - x)] = max(dp.get(abs(y - x), 0), curr_dp[y] + min(y, x))
        return dp.get(0, 0)  