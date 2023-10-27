class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        int ans_size = 0;

        for (int i = 0; i < s.size(); i++) {
            int left = i;
            int right = i;

            // odd check
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                if (right - left + 1 > ans_size) {
                    ans_size = right - left + 1;
                    ans = s.substr(left, ans_size);
                }
                left--;
                right++;
            }

            left = i;
            right = i + 1;

            // even check
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
                if (right - left + 1 > ans_size) {
                    ans_size = right - left + 1;
                    ans = s.substr(left, ans_size);
                }
                left--;
                right++;
            }
        }
        return ans;

    }
};