class Solution {
public:
    bool isPalindrome(string& s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {
            if (!isalnum(s[i])) {
                i++;
            } else if (!isalnum(s[j])) {
                j--;
            } else if (tolower(s[i]) != tolower(s[j])) {
                return false;
            } else {
                i++;
                j--;
            }
        }

        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        for (size_t i = 0; i < words.size(); ++i) {
            isPalindrome(words[i]);
            if (isPalindrome(words[i])) {
                return words[i];
            }
        }
        return "";
    }
};