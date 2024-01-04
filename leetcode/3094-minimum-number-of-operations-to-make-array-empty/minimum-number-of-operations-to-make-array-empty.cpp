class Solution {
public:
    int minOperations(vector<int>& nums) {
        size_t counter = 0;
        unordered_map<int, size_t>mapping{};
        for_each(nums.begin(), nums.end(), [&mapping](const int& x) {
            mapping[x]++;
        });
        
        for (const auto& [x, y] : mapping) {
            if (y == 1) return -1;
            else counter += (y + 2) / 3;
        }

        return counter;
    }
};