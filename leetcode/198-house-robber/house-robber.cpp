class Solution {
public:
    int rob(vector<int>& nums) {
        // using dp as an array to save the results of each computation 

        // our dp[i] = the max we can get till the ith index, 

        int n = nums.size();
        // base case 
        if (n == 1) {
            return nums[0];
        }
        // init our array for dp
        vector<int> dp(n);
        // init our dp 1 equal to the max of the two adjacent houses (0 vs 1)
        // also need to init the first two elements
        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);
        // then we can iterate over every second as we are checking every second from the max we set
        // dp[1] to
        for (int i = 2; i < n; i++) {
            // we can either keep the loot we had at the last index or we can rob
            // the current house and add it to the loot we have two index's back
            dp[i] = max(dp[i-1], nums[i] + dp[i-2]);
        }
        // we return the back element of dp as that is the element in our vector that contains the max
        // number of loot we robbed
        return dp.back();      
    }
};