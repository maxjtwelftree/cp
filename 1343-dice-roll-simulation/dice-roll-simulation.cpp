class Solution {
public:
    int dieSimulator(int n, vector<int>& rollMax) {
        const int mod = 1e9 + 7;
        vector<vector<long long>> dp(n + 1, vector<long long>(6, 0));
        vector<long long> sum(n + 1, 0); // sum[i] stores the total number of sequences of length i
        sum[0] = 1; // Base case: one way to have a sequence of length 0

        for (int i = 1; i <= n; ++i) {
            for (int j = 0; j < 6; ++j) {
                for (int k = 1; k <= rollMax[j] && i - k >= 0; ++k) {
                    dp[i][j] = (dp[i][j] + sum[i - k] - dp[i - k][j] + mod) % mod;
                }
            }
            sum[i] = accumulate(dp[i].begin(), dp[i].end(), 0LL) % mod;
        }

        return sum[n];
    }
};
