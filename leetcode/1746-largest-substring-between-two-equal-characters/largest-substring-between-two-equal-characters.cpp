class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> mapping{};
        int max_length{-1};

        for (size_t i = 0; i < s.size(); ++i) { 
            if (mapping.find(s[i]) == mapping.end()) mapping[s[i]] = i;
            else {
                max_length = std::max(max_length, static_cast<int>(i) - static_cast<int>(mapping[s[i]]) - 1);
            }
        }
        return max_length;    
    }
};