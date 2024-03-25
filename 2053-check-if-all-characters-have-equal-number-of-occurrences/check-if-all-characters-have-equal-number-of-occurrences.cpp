class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> mapping;
        mapping.rehash(1000);
        for (const auto& x : s)     
            mapping[x]++;

        auto it_count = mapping.begin()->second;
        
        for (const auto& pair : mapping) {
            if (pair.second != it_count) {
                return false;
            }
        }

        return true;   
    }
};