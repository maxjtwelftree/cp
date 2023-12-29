#include <vector>
#include <algorithm>
#include <limits>

class Solution {
public:
    int minDifficulty(std::vector<int>& jobDifficulty, int d) {
        int32_t n = jobDifficulty.size();
        if (d > n) return -1;

        const int32_t max = std::numeric_limits<int32_t>::max();
        std::vector<int32_t> dp(n + 1, max);
        dp[n] = 0;

        for (int32_t day = 1; day <= d; ++day) {
            std::vector<int32_t> next_dp(n + 1, max);
            for (int32_t i = 0; i <= n - day; ++i) {
                int32_t maxDiff = 0;
                for (int j = i; j < n - day + 1; ++j) {
                    maxDiff = std::max(maxDiff, jobDifficulty[j]);
                    if (dp[j + 1] != max) { 
                        next_dp[i] = std::min(next_dp[i], maxDiff + dp[j + 1]);
                    }
                }
            }
            dp = next_dp;
        }

        return dp[0] == max ? -1 : dp[0];
    }
};