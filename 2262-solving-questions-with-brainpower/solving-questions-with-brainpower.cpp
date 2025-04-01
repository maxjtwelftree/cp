class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
        //   1 -> 3 = 4
        //   2 -> 5 = 7
        //   3 -> 1 = 4
        //   4 -> ? = 4
        //   5 -> 2 = 7

        vector<long long> dp(questions.size() + 1, 0);

        long long current_max = 0;

        for (long long i = questions.size() - 1; i >= 0; --i) {
            long long points = questions[i][0];
            long long size = questions[i][1];
            long long yes = points + (i + size + 1 < questions.size() ? dp[i + size + 1] : 0);
            long long no = dp[i + 1];

            dp[i] = max(yes, no);
        } 

        return dp[0];
    }
};