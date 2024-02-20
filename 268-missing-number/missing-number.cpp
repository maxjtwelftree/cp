struct Solution {
    [[nodiscard]] int missingNumber(vector<int>& nums) {
        int_least32_t answer = nums.size();

        for (size_t i = 0; i < nums.size(); ++i) {
            answer ^= i ^ nums[i];
        }
        
        return answer;
    }
};