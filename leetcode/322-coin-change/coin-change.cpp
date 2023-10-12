class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        // dp array w amount
        int dp[amount + 1];

        // for (int i = 0; i <= amount; i++) {
        //     dp[i] = amount + 1;
        // }
        // set to 0
        // dp[0] = 0;

        for (int i = 0; i <= amount; i++) {
            dp[i] = amount + 1;
            dp[0] = 0;
            for (int coin : coins) {
                if (i - coin >= 0) {
                    dp[i] = min(dp[i], 1 + dp[i - coin]);
                }
            }
        }

        return dp[amount] == amount + 1 ? -1 : dp[amount];
    }
};