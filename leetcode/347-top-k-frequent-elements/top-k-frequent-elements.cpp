class Solution {
public:
    [[nodiscard]] auto topKFrequent(vector<int>& nums, int k) -> vector<int> {
        unordered_map<int, int> find_k_frequency;
        for (const auto& x : nums) find_k_frequency[x]++;
        vector<pair<int, int>> freqVector(find_k_frequency.begin(), find_k_frequency.end());
        nth_element(freqVector.begin(), freqVector.begin() + k, freqVector.end(), [](const auto& a, const auto& b) { return a.second > b.second; });
        sort(freqVector.begin(), freqVector.begin() + k, [](const auto& a, const auto& b) { return a.second > b.second; });
        vector<int> output;
        output.reserve(k);
        for (auto x = 0; x < k; ++x) output.push_back(freqVector[x].first);
        return output;
    }
};