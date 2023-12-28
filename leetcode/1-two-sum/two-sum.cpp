class Solution {
public:
    vector<int> twoSum(vector<int>& input, int target) {
        unordered_map<int32_t, int32_t> mapping;
        for (int32_t index = 0; index < input.size(); ++index) {
            if (mapping.count(target - input[index])) {
                return vector<int>{index, mapping[target - input[index]]};
            }
            mapping[input[index]] = index;
        }

        throw invalid_argument{"Bruh"};
    }  
};