class Solution {
public:
    long long countVowels(string word) {
        long long ans = 0;
        unordered_set<char> set{'a', 'e', 'i', 'o', 'u'};
        vector<long long> dp(word.size(), 0);
        
        if (set.find(word[0]) != set.end()) {
            dp[0] = 1;
            ans = dp[0];
        }

        for (size_t i = 1; i < word.size(); ++i) {
            if (set.find(word[i]) != set.end()) dp[i] = (i + 1) + dp[i - 1];
            else dp[i] = dp[i - 1];
            ans += dp[i];
        }

        return static_cast<long long>(ans);
    }
};
