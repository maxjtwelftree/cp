class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> mapping_chars{};
        int max_length{-1};

        for (size_t i = 0; i < s.size(); ++i) { 
            if (mapping_chars.find(s[i]) == mapping_chars.end()) mapping_chars[s[i]] = i;
            else {
                max_length = max(max_length, static_cast<int>(i) - static_cast<int>(mapping_chars[s[i]]) - 1);
            }
        }
        return max_length;    
    }
};