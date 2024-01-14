struct Solution {
    [[nodiscard]] int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mapping{};
        auto ans = 0, sum = 0;
        mapping[sum] = 1;
        
        for (size_t i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            auto finder = sum - k;
            if (mapping.find(finder) != mapping.end()) {
                ans += mapping[finder];
            }
            mapping[sum]++;
        }

        return ans;
    }
};