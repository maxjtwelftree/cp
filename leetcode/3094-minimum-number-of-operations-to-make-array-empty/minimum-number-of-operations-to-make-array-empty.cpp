class Solution {
public:
    int minOperations(vector<int>& nums) {
        int counter = 0;
        unordered_map<int, int>mapping{};
        for (const auto& x : nums) mapping[x]++;
        
        for (const auto& [x, y] : mapping) {
            if (y == 1) return -1;
            else counter = counter + ((y + 2) / 3);
        }

        return counter;
    }
};