struct Solution {
    int_least32_t findJudge(const int_least32_t n, const vector<vector<int_least32_t>>& trust) const {
        vector<int_least32_t> mapping(n + 1, 0);
        // maybe reserve called here instead of above?

        for (const auto& x : trust) 
            mapping[x[0]]--, mapping[x[1]]++;
        
        for (int_least32_t i = 1; i <= n; ++i) 
            if (mapping[i] == n - 1) return i;
        
        return -1;
    }
};