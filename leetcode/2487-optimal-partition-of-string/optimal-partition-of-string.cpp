class Solution {
public:
    int partitionString(string s) {
        unordered_set<char> set;
        int count = 0;
        for (char c : s) {
            if (set.count(c)) {
                count++;
                set.clear();
            }
            set.insert(c);
        }
        return count + 1;
    }
};