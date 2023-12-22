class Solution {
public:
    int maxScore(string s) {
        int32_t count_1 = count(s.begin(), s.end(), '1');
        int32_t count_2{};
        int32_t max_score{};
        
        for (size_t c = 0; c < s.size() - 1; ++c) {
            count_2 += s[c] == '0';
            count_1 -= s[c] == '1';
            max_score = max(max_score, count_1 + count_2);
        }
        
        return max_score;
    }
};