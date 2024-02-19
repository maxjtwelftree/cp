struct Solution {
    [[nodiscard]] int_least32_t lengthOfLongestSubstringTwoDistinct(string s) const {
        unordered_map<char, int_least32_t> mapping{};
        int_least32_t final_ans = 0;
        int_least32_t left = 0;

        for (size_t right = 0; right < s.length(); ++right) {
            mapping[s[right]] = right;
            while (mapping.size() > 2) {
                if (mapping[s[left]] == left) mapping.erase(s[left]);
                left++;
            }
            final_ans = max(final_ans, static_cast<int_least32_t>(right) - left + 1);
        }
        
        return final_ans;
    }
};