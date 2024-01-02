class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        auto mapping = unordered_map<int, int>{};
        for (const auto& x : nums) mapping[x]++;

        auto custom_sort_vect = vector<pair<int, int>>(mapping.begin(), mapping.end());
        std::ranges::sort(custom_sort_vect.begin(), custom_sort_vect.end(),
            [](const auto& a, const auto& b) {
                return a.second > b.second;
            });

        vector<vector<int>> output_vector;
        for (auto it = custom_sort_vect.begin(); it != custom_sort_vect.end(); ++it) {
            auto checker1 = it->first, checker2 = it->second;
            for (auto i = 0; i < checker2; ++i) {
                if (output_vector.size() <= i) {
                    output_vector.push_back(std::vector<int>());
                }
                output_vector[i].push_back(checker1);
            }
        }

        return output_vector;
    }
};