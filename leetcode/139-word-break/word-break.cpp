class Solution {
public:
    vector<int> dp;
    // intit DP
    bool solve(int i, string s, vector<string>& wordDict){
        // signature to solve with i, string and dictionary
        if (i < 0) return 1;
        // base case
        if (dp[i] != -1) return dp[i] == 1;
        // no idea
        for (string & w : wordDict) {
        // for loop covering string and words in word dict 
            int sz = w.size();
            // size int
            if (i - sz + 1 < 0) continue;
            // if index - size + 1 is less than 0; continue
            if (s.rfind(w, i-sz+1)== i-sz+1 && solve(i - sz, s, wordDict)) {
                dp[i] = 1;
                return 1;
            }
            // no clue
        }
        dp[i] = 0;
        return 0;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        int && n = s.size();
        dp.assign(n, -1);
        return solve(n - 1, s, wordDict);
    }
};

