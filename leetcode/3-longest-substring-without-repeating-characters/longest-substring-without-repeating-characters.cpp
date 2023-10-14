class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> freq;
        int j = 0;
        int longestSubstring = 0;

        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
            while (freq[s[i]] > 1) {
                freq[s[j]]--;
                j++;
            }
            longestSubstring = max(longestSubstring, i - j + 1);
        }
        return longestSubstring;
    }
};