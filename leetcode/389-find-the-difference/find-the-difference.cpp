class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> map1, map2;

        // auto is used in range-based for loops to iterate over the elements of the strings and the map
        for (auto i : s) {
            map1[i]++;
        }
        for (auto j : t) {
            map2[j]++;
        }
        char ans;
        for (auto i : map2) {
            if (map1[i.first] != map2[i.first]) {
                ans = i.first;
            }
        }
        return ans;

        // auto is a keyword used to automatically deduce the type of a variable at compile-time, based on the type of its initializer or on the type that a function call returns
    }
};