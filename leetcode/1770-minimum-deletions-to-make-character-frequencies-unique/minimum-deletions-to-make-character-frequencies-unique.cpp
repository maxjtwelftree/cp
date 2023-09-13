class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char, int> map;
        unordered_map<char, int> freqMap;

        for (char ch : s) {
            map[ch]++;
        }

        int deletions = 0;

        for (auto &entry : map) {
            int freq = entry.second;
            while (freqMap[freq] > 0) {
                freq--;
                deletions++;
            }
            if (freq > 0) {
                freqMap[freq]++;
            }
        }
        return deletions;
    }
};