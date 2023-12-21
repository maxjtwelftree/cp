class Solution {
public:
    int characterReplacement(string s, int k) {
        auto counter = 0, ans = 0, c = 0, b = 0;
        auto charCount = unordered_map<char, int>{};

        for (size_t c = 0; c < size(s); ++c) {
            charCount[s[c]]++;
            counter = max(counter, charCount[s[c]]);
            if (c - b + 1 - counter > k) {
                charCount[s[b]]--;
                b++;
            }
            ans = max(ans, static_cast<int>(c - b + 1));
        }
        return ans;        
    }
};