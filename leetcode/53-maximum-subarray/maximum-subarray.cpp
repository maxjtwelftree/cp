struct Solution {
    [[nodiscard]] int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums);
        for (size_t i = 1; i < nums.size(); ++i) dp[i] = max(nums[i], nums[i] + dp[i-1]);
        return *max_element(dp.begin(), dp.end());
    }
};