class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n = rowIndex;
        vector<int> dp (n + 1);
        dp[0] = 1;

        for (int i = 0; i < n; i++) {
            for (int j = n-1; j >= 0; j--) {
                dp[j+1] += dp[j];
            }
        }
        
        return dp;
    }
};