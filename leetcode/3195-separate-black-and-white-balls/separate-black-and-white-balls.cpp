class Solution {
public:
    using i64 = long long;
    long long minimumSteps(string s) {
        int n = s.size();
        i64 ans = 0, cnt = 0;

        for (auto i = n; i >= 0; i--) {
            if (s[i] == '0') {
                ans++;
            } else {
                cnt += ans;
            }
        }
        
        return cnt;
    }
};