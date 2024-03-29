class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> dp(m, vector<int> (n, 0));
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                dp[i][j] = grid[i][j];
                if (i == m - 1 && j == n - 1) continue;
                else if (i == m - 1) dp[i][j] = dp[i][j+1] + grid[i][j];
                else if (j == n - 1) dp[i][j] = dp[i+1][j] + grid[i][j];
                else dp[i][j] = grid[i][j] + min(dp[i+1][j], dp[i][j+1]);
            }
        }

        return dp[0][0];
    }
};