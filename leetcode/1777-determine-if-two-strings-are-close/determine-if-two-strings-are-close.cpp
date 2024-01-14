class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size()) return false;

        unordered_map<char, int> mapping_1{};
        unordered_map<char, int> mapping_2{};

        for (const auto c : word1) mapping_1[c]++;
        for (const auto c : word2) mapping_2[c]++;

        for (const auto& i : mapping_1) {
            if (mapping_2.find(i.first) == mapping_2.end()) return false;
        }

        vector<pair<int, int>> out1 (mapping_1.begin(), mapping_1.end());
        sort(out1.begin(), out1.end(), [] (const auto a, const auto b) {
            return a.second > b.second;
        });

        vector<pair<int, int>> out2 (mapping_2.begin(), mapping_2.end());
        sort(out2.begin(), out2.end(), [] (const auto a, const auto b) {
            return a.second > b.second;
        });

        for (size_t i = 0; i < out1.size(); ++i) {
            if (out1[i].second != out2[i].second) return false;
        }

        return true;
    }
};