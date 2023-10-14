class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;
        int j = 0;
        int i = 0;
        unordered_set<char> set;

        while (i < n && j < n) {
            if (set.find(s[j]) == set.end()) {
                set.insert(s[j++]);
            } else {
                set.erase(s[i++]);
            }
            ans = max(ans, j-i);
        }
        return ans;
    }
};