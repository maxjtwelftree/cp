class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt = 0;
        set<char> helloooooo;

        for (auto c : jewels) {
            helloooooo.insert(c);
        }

        for (auto i : stones) {
            if (helloooooo.find(i) != helloooooo.end()) {
                cnt++;
            }
        }

        return cnt;
    }
};