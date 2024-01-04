class Solution {
public:
    int_least32_t minOperations(vector<int>& nums) {
        size_t counter = 0;
        unordered_map<int_least32_t, size_t>mapping{};
        for_each(nums.begin(), nums.end(), [&mapping](const int_least32_t& x) {
            mapping[x]++;
        });
        
        for (const auto& [x, y] : mapping) {
            if (y == 1) return -1;
            else counter += (y + 2) / 3;
        }

        return counter;
    }
};