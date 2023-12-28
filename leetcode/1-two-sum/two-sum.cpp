class Solution {
public:
    [[nodiscard]] std::vector<int32_t> twoSum(std::vector<int32_t>& input, int32_t target) {
        std::unordered_map<int32_t, int32_t> mapping;
        for (size_t index = 0; index < input.size(); ++index) {
            auto new_type = target - input[index];
            if (mapping.count(new_type)) {
                return {mapping[new_type], static_cast<int32_t>(index)};
            }
            mapping[input[index]] = index;
        }

        return {};
    }  
};