class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int x = t.size();
        int i = 0;
        int count = 0;

        for (int j = 0; j<x; j++) {
            if (t[j] == s[i]) {
                i++;
            }
        }

        if (i == n) {
            return true;
        }
        return false;
        
    }
};