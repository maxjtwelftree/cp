struct Solution {
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size()) return false;

        array<int, 26> freq_1{}, freq_2{}; 
        array<bool, 26> exists_1{}, exists_2{};

        for (auto c : word1) {
            freq_1[c - 'a']++;
            exists_1[c - 'a'] = true;
        }
        
        for (auto c : word2) {
            freq_2[c - 'a']++;
            exists_2[c - 'a'] = true;
        }
        
        if (exists_1 != exists_2) return false;
        ranges::sort(freq_1), ranges::sort(freq_2);

        return freq_1 == freq_2;
    }
};