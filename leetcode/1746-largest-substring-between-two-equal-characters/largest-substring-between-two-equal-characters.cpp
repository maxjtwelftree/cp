class Solution {
public:
    int maxLengthBetweenEqualCharacters(std::string s) {
        std::array<int, 26> firstOccurrence;
        firstOccurrence.fill(-1); 
        int max_length = -1;

        for (size_t i = 0; i < s.size(); ++i) 
            if (firstOccurrence[s[i] - 'a'] == -1) firstOccurrence[s[i] - 'a'] = i;
            else max_length = std::max(max_length, static_cast<int>(i) - firstOccurrence[s[i] - 'a'] - 1);
        return max_length;    
    }
};