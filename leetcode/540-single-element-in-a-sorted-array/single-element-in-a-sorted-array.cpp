struct Solution {
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int, int> mapping{};

        for (const auto& x : nums) 
            mapping[x]++;

        vector<pair<int, int>> pairings(mapping.begin(), mapping.end());
        sort(pairings.begin(), pairings.end(), [] (const auto& a, const auto& b) {
            return a.second > b.second;
        });

        return pairings.back().first;
    }
};