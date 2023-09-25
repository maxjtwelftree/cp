class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> map1, map2;
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
    }
};