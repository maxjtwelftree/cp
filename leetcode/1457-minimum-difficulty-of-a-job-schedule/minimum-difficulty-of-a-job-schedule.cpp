#include <vector>
#include <algorithm>
#include <limits>

class Solution {
public:
    int minDifficulty(std::vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        if (d > n) return -1;

        const int max = std::numeric_limits<int>::max();
        std::vector<int> dp(n + 1, max); // O(n) aux 
        dp[n] = 0;

        for (size_t day = 1; day <= d; ++day) { // O(n^2 * d)
            std::vector<int> next_dp(n + 1, max);
            for (size_t i = 0; i <= n - day; ++i) {
                int maxDiff = 0;
                for (size_t j = i; j < n - day + 1; ++j) {
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