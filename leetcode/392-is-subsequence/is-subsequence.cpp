class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size();
        int x = t.size();
        int j = 0;

        for (int i = 0; i < x && j < n; i++) {
            if (s[j] == t[i]) {
                j++;
            }
        }
        return (j==n);
        
    }
};