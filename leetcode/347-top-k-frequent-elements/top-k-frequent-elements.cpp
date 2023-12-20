class Solution {
public:
    [[nodiscard]] auto topKFrequent(std::vector<int>& nums, int k) -> std::vector<int> {
        std::unordered_map<int, int> find_k_frequency;

        for (const auto& x : nums) {
            find_k_frequency[x]++;
        }

        std::vector<std::pair<int, int>> freqVector(find_k_frequency.begin(), find_k_frequency.end());
        std::sort(freqVector.begin(), freqVector.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
            return a.second > b.second;
        });

        std::vector<int> output;
        output.reserve(k);
        for (auto x = 0; x < k; ++x) {
            output.push_back(freqVector[x].first);
        }

        return output;
    }
};