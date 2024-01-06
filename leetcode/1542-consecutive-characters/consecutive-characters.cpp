class Solution {
public:
    int maxPower(string s) {
        int16_t finder = 1;
        int16_t final_finder = 0;

        for (size_t i = 1; i < s.size(); ++i) {
            if (s[i] == s[i-1]) {
                finder++;
            } else {
                final_finder = max(final_finder, finder);
                finder = 1;
            }
        }

        return max(finder, final_finder);
    }
};