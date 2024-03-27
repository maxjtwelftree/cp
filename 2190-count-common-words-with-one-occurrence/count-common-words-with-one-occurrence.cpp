class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> map_1;

        for (const auto word : words1) map_1[word]++;
        for (const auto word : words2) if (map_1[word] < 2) map_1[word]--;

        return count_if(map_1.begin(), map_1.end(), [] (const auto& x) {
            return x.second == 0;
        });    
    }
};