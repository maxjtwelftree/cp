class Solution {
public:
    int minOperations(string s) {
        auto cnt_1 = 0;
        auto cnt_2 = 0;

        for (auto x = 0; x < size(s); x++) {
            if (x % 2 == 0) {
                cnt_1 += s[x] != '0';
                cnt_2 += s[x] != '1';
            } else {
                cnt_1 += s[x] != '1';
                cnt_2 += s[x] != '0';
            }
        }
        return min(cnt_1, cnt_2);
    }
};