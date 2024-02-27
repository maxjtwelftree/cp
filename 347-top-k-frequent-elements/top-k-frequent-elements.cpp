struct Solution {
    [[nodiscard]] std::vector<int_least32_t> topKFrequent(const std::vector<int_least32_t>& nums, int_least32_t k) const {
        std::unordered_map<int, int> mapping_frequencies{};

        for (const auto& num : nums) 
            mapping_frequencies[num]++;
        
        std::vector<pair<int, int>> pairings_frequencies(mapping_frequencies.cbegin(), mapping_frequencies.cend());
        std::sort(pairings_frequencies.begin(), pairings_frequencies.end(), [] (const auto a, const auto b) {
            return a.second > b.second;
        }); 
        
        vector<int> output_vector{};
        for (int_least32_t i = 0; i < k; ++i) 
            output_vector.push_back(pairings_frequencies[i].first);
        
        return output_vector;
    }
};