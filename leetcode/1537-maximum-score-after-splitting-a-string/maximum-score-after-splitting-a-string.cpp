class Solution {
public:
    int maxScore(string s) {
        auto count_1 = count(s.begin(), s.end(), '1');
        auto count_2 = 0, max_score = 0;
        
        for (size_t c = 0; c < s.size() - 1; ++c) {
            count_2 += s[c] == '0';
            count_1 -= s[c] == '1';
            max_score = max(max_score, static_cast<int>((count_1 + count_2)));
        }
        
        return max_score;
    }
};