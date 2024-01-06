struct Solution {
    [[nodiscard]] int maximumGap(vector<int>& nums) {
        auto current_maximum = 0;
        ranges::sort(nums);

        for (size_t i = 1; i < nums.size(); ++i)
            if (nums[i] - nums[i-1] > current_maximum)
                current_maximum = nums[i] - nums[i-1];
        
        return current_maximum;
    }
};