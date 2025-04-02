class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long max_curr = 0;

        for (long long i = 0; i < nums.size(); ++i) {
            for (long long j = i + 1; j < nums.size(); ++j) {
                for (long long k = j + 1; k < nums.size(); ++k) {
                    long long value = 1LL * (nums[i] - nums[j]) * nums[k];
                    max_curr = std::max(max_curr, value);                }
            }
        }

        return max_curr;
        
    }
};