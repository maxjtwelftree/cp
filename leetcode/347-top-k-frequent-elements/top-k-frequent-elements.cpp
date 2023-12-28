class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int32_t, int32_t> freqs;
        for (const auto& x : nums) freqs[x]++;

        vector<pair<int32_t, int32_t>> f_vec(freqs.begin(), freqs.end());
        nth_element(f_vec.begin(), f_vec.begin() + k, f_vec.end(), 
        [](const auto& a, const auto& b) 
        { return a.second > b.second; });
        
        vector<int32_t> output;
        for (int32_t x = 0; x < k; ++x) output.push_back(f_vec[x].first);
        return output;
    }
};