struct Solution {
    int findLucky(vector<int>& arr) {
        vector<int> lucky_nums{};
        unordered_map<int, int> mapping{};

        for (const auto& x : arr) 
            mapping[x]++;
        
        for (auto [x, y] : mapping) 
            if (x == y) lucky_nums.push_back(x);
        
        return !lucky_nums.empty() ? *max_element(lucky_nums.begin(), lucky_nums.end()) : -1;   
    }
};