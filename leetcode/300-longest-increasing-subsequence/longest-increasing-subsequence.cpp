struct Solution {
    [[nodiscard]] int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(), 1);

        for (size_t i = 0; i < nums.size(); ++i)  
            for (size_t j = 0; j < i; ++j)
                if (nums[i] > nums[j])
                    dp[i] = max(dp[i], static_cast<int>(dp[j] + 1));

        return *max_element(dp.begin(), dp.end());
    }
};