class Solution {
public:
    string finalString(string s) {
        int n = s.length();
        string result;
        for (char c : s) {
            if (c == 'i') {
                reverse (result.begin(), result.end());
            }
            else {
                result += c;
            }
        }
        return result;
    }
};