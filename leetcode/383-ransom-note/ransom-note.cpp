class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> map1, map2;

        for (char ch : ransomNote) {
            map1[ch]++;
        }

        for (char ch : magazine) {
            map2[ch]++;
        }

        for (auto entry : map1) {
            if (map2[entry.first] < entry.second) {
                return false;
            }
        }

        return true;
    }
};