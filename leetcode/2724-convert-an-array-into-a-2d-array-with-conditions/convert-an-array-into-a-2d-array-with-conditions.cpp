class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        // get freqs;
        auto mapping = std::unordered_map<int, int>{};
        // [1,3,4,1,2,3,1]
        // 1 = 3, 3 = 2, 2 = 1, 4 = 1

        // then sort based on freqs with custom sort function
        // 1 = 3, 3 = 2, 2 = 1, 4 = 1
        // then iterate over these elements pushing them into a 2d vector on each iteration
        // decrementing the frequencies as we go

        for (const auto& x : nums) mapping[x]++;

        auto custom_sort_vect = vector<pair<int, int>>(mapping.begin(), mapping.end());
        std::sort(custom_sort_vect.begin(), custom_sort_vect.end(),
              [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
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