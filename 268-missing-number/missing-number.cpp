struct Solution {
    [[nodiscard]] int missingNumber(const vector<int>& nums) const {
        int_least32_t answer = nums.size();

        for (size_t i = 0; i < nums.size(); ++i) {
            answer ^= i ^ nums[i];
        }
        
        return answer;
    }
};