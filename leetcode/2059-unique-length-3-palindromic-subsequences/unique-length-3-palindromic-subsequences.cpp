class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int cnt = 0;
        int n = s.size();

        unordered_map<char, pair<int, int>> map;

        // aabca
        // key: a b c
        // val: 3 1 1

        // we just check if a subsequence in the the string has an > 1 odd count if 
        // it does it cannot be a palindromic subsequence. 

        // the only case we need to check for within my map is if an element 
        // is >= 2 we increase count, then continue checking, if 


        for (int i = 0; i < s.size(); i++) {
            if (map.find(s[i]) == map.end()) {
                // First occurrence of the character
                map[s[i]] = {i, i};
            } else {
                // Update last occurrence of the character
                map[s[i]].second = i;
            }
        }

        // MAP:
        // aabca
        // a = 0, 5
        // b = 1
        // c = 4

        // For each character, check the substring between the first and last occurrence of that character for any other unique character.

        // aabca
        // if a has any other unique characters or itself then cnt 
        // 

        for (const auto& it : map) {
            // set just for the unique characters 
            unordered_set<char> set;

            for (int i = it.second.first + 1; i < it.second.second; ++i) {
                set.insert(s[i]);
            }

            cnt += set.size();
        }
        return cnt;
    }
};