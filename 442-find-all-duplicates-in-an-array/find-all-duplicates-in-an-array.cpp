class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> mapping{};

        for (const auto& x : nums) {
            mapping[x]++;
        }

        vector<int> output{};
        for (auto [key, val] : mapping) {
            if (val == 2) {
                output.emplace_back(key);
            }
        }

        return output;
    }
};