class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        auto mapping_elements = std::unordered_map<int, int>{};

        for (const auto& i : nums) mapping_elements[i]++;

        auto output = vector<int>();

        for (const auto [i, j] : mapping_elements) 
            if (j > nums.size() / 3) output.push_back(i);
        return output;
    }
};