struct Solution {
    [[nodiscard]] int lengthOfLongestSubstringTwoDistinct(string s) {
        unordered_map<char, int> mapping{};
        int32_t final_ans = 0, left = 0;

        for (int right = 0; right < s.length(); ++right) {
            mapping[s[right]] = right;

            while (mapping.size() > 2) {
                if (mapping[s[left]] == left) {
                    mapping.erase(s[left]);
                }
                left++;
            }

            final_ans = max(final_ans, right - left + 1);
        }
        
        return final_ans;
    }
};