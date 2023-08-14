class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.length();
        int i = 0;
        int j = i + 1;

        while (i < n) {
            if (s[i] == s[j]) {
                s.erase(i, 2);
                i = max(0, i - 1);
                j = max(1, j - 1);
            }
            else {
                i++;
                j++;
            }
        }
        return s;
    }
};