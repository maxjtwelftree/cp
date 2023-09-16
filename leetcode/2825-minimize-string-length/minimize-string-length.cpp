class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> mySet;

        for (char c : s) {
            if (mySet.count(c) == 0) {
                mySet.insert(c);
            }
        }
        return mySet.size();
    }
};