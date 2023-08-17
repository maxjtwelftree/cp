class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> map;
        int oddCount = 0;

        for (char ch : s) {
            map[ch]++;
            if (map[ch] % 2 == 1) {
                oddCount++;
            }
            else {
                oddCount--;
            }
        }
        if (oddCount > 1) {
            return s.length() - oddCount + 1;
        }
        return s.length();
    }
};