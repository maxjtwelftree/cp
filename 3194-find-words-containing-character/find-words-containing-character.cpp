class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        set<int> indexs{};

        for (size_t i = 0; i < words.size(); ++i) {
            for (char c : words[i]) {
                if (c == x) indexs.insert(i);
            }
        }

        vector<int>out(indexs.begin(), indexs.end());
        return out;
        
    }
};