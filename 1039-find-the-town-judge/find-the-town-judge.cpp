struct Solution {
    int findJudge(int_least32_t n, vector<vector<int_least32_t>>& trust) const {
        vector<int_least32_t> mapping(n + 1, 0);

        for (const auto& x : trust) 
            mapping[x[0]]--, mapping[x[1]]++;
        
        for (int i = 1; i <= n; ++i) 
            if (mapping[i] == n - 1) return i;
        
        return -1;
    }
};