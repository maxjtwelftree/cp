class Solution {
public:
    char repeatedCharacter(string s) {
        int array[26];
        for (size_t i = 0; i < s.size(); ++i) {
            array[s[i] - 'a']++;
            if (array[s[i] - 'a'] > 1) {
                return s[i];
            }
        }

        return 'a';

    }
};