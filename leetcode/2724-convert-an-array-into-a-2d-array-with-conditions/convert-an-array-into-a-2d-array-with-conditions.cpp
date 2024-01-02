class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        std::unordered_map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }

        // Custom comparator for the multiset
        auto comp = [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
            return a.first > b.first || (a.first == b.first && a.second < b.second);
        };
        std::multiset<std::pair<int, int>, decltype(comp)> sortedSet(comp);

        for (const auto& [num, count] : counts) {
            sortedSet.insert({count, num});
        }

        std::vector<std::vector<int>> matrix;
        for (const auto& [count, num] : sortedSet) {
            for (int i = 0; i < count; ++i) {
                if (matrix.size() <= i) {
                    matrix.emplace_back();
                }
                matrix[i].push_back(num);
            }
        }

        return matrix;
    }
};