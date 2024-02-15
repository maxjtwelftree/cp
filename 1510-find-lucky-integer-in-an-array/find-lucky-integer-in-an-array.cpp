struct Solution {
    [[nodiscard]] int_least32_t findLucky(vector<int>& arr) {
        vector<int_least32_t> lucky_nums{};
        unordered_map<int_least32_t, int_least32_t> mapping{};

        for (const auto& element : arr) 
            mapping[element]++;
        
        for (auto [key, value] : mapping) 
            if (key == value) lucky_nums.push_back(key);
        
        return !lucky_nums.empty() ? *max_element(lucky_nums.begin(), lucky_nums.end()) : -1;   
    }
};