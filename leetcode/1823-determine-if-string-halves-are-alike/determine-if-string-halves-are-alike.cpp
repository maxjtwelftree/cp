class Solution {
public:
    bool halvesAreAlike(string s) {
        int count = 0;
        string vowels = "aeiouAEIOU";
        int halfLength = s.length() / 2;
        for (int i = 0; i < s.length(); i++) {
            if (vowels.find(s[i]) != -1) {
                if (i < halfLength) {
                    count++;
                }
                else {
                    count--;
                }
            }
        }
        return count == 0;
    }
};