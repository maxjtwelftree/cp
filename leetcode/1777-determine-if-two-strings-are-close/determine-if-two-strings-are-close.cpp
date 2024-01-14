struct Solution {
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size()) return false;

        array<int, 26> freq1{}, freq2{}; 
        array<bool, 26> exists1{}, exists2{};

        for (auto c : word1) {
            freq1[c - 'a']++;
            exists1[c - 'a'] = true;
        }
        
        for (auto c : word2) {
            freq2[c - 'a']++;
            exists2[c - 'a'] = true;
        }
        
        if (exists1 != exists2) return false;

        ranges::sort(freq1), ranges::sort(freq2);

        return freq1 == freq2;
    }
};