class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> dp(rowIndex + 1);
        dp[0] = 1;
        for (int i = 0; i < rowIndex; ++i) {
            for (int j = rowIndex - 1; j >= 0; --j) {
                dp[j+1] += dp[j];
            }
        }        
        return dp;
    }
};