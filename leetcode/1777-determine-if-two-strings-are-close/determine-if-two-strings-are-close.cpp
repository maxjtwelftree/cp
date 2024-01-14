struct Solution {
    bool closeStrings(string word1, string word2) {
        if (word1.size() != word2.size()) return false;

        array<int, 26> freq1{}; // Frequency array for word1
        array<int, 26> freq2{}; // Frequency array for word2
        array<bool, 26> exists1{}; // Existence array for word1
        array<bool, 26> exists2{}; // Existence array for word2

        for (char c : word1) {
            freq1[c - 'a']++;
            exists1[c - 'a'] = true;
        }
        for (char c : word2) {
            freq2[c - 'a']++;
            exists2[c - 'a'] = true;
        }

        // Check if both strings contain the same unique characters
        if (exists1 != exists2) return false;

        // Sort and compare frequencies
        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return freq1 == freq2;
    }
};