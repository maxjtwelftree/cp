class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        istringstream iss(text);
        vector<string> words{istream_iterator<string>{iss}, istream_iterator<string>{}};
        unordered_set<char> broken(brokenLetters.begin(), brokenLetters.end());
        int cnt = 0;

        for (const auto& word : words) {
            if (none_of(word.begin(), word.end(), [&](char ch) { return broken.count(ch) > 0; })) {
                cnt++;
            } 
        }

        return cnt;
    }
};