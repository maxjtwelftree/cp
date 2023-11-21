class Solution {
public:
    bool checkZeroOnes(string s) {
        int cnt1 = 0, cnt2 = 0, tracker1 = 0, tracker2 = 0;
        bool flag = false;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                cnt1++;
                tracker1 = max(tracker1, cnt1);
                cnt2 = 0;
            } else {
                cnt2++;
                tracker2 = max(tracker2, cnt2);
                cnt1 = 0;
            }
        }

        return tracker2 > tracker1;
    }
};