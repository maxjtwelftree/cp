class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int_least32_t result = 0;
        vector<unordered_map<long long, int_least32_t>> dp(nums.size());

        for (size_t i = 1; i < nums.size(); ++i) {
            for (size_t j = 0; j < i; ++j) {
                long long difference = static_cast<long long>(nums[i]) - static_cast<long long>(nums[j]);
                int_least32_t total = dp[j][difference];
                result += total;
                dp[i][difference] += total + 1;
            }
        }
    
        return result;
    }
};