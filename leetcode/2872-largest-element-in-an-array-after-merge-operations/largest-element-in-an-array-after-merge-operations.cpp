class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        vector<uint64_t> longNums(nums.begin(), nums.end());

        for (size_t i = longNums.size() - 1; i > 0; --i) {
            if (longNums[i] >= longNums[i-1]) {
                longNums[i - 1] += longNums[i];
            }
        }

        return longNums[0];
    }
};