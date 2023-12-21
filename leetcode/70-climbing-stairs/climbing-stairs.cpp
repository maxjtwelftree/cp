class Solution {
public:
    constexpr int fib(vector<int>& dp, int n) {
        dp[0] = 1, dp[1] = 1;
        for (size_t i = 2; i <= n; ++i) dp[i] = dp[i - 1] + dp[i - 2];
        return dp[n];
    }

    int climbStairs(int n) {
        auto dp = vector<int>(n + 1, 0);
        return fib(dp, n);
    }
};