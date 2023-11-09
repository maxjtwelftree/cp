class Solution {
public:
    int countHomogenous(string s) {
        const int MOD = 1e9 + 7;
        auto cnt = 0, ans = 0;
        // abbcccaa

        for (auto i = 0; i < s.size(); i++) {
            if (i == 0 || s[i] == s[i-1]) {
                cnt++;
            } else {
                cnt = 1;
            }
            ans = (ans + cnt) % MOD;
        }

        return ans;
    }
};