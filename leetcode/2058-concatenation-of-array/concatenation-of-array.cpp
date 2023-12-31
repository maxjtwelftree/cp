class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>concatenated_vector;
        for (const auto& i : nums) concatenated_vector.emplace_back(i);
        for (const auto& i : nums) concatenated_vector.emplace_back(i);
        return concatenated_vector;
    }
};