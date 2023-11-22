class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> map1, map2;
        
        for (char i : s) map1[i]++;
        for (char i : t) map2[i]++;
        
        return map1 == map2;
    }
};