struct Solution {
    int shortestDistance(vector<string>& wordsDict, string word1, string word2) {
        int checker1{-1}, checker2{-1}, ans{INT_MAX};
        for (size_t i = 0; i < wordsDict.size(); ++i) {
            if (word1 == wordsDict[i]) checker1 = i;
            else if (word2 == wordsDict[i]) checker2 = i;
            if (checker1 != -1 && checker2 != -1) ans = min(ans, abs(checker1 - checker2));
        }
        return ans;
    }
};