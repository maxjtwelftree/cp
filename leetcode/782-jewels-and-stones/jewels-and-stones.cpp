class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int cnt = 0;
        set<char> helloooooo;
        
        for (char c : jewels) {
            helloooooo.insert(c);
        }

        for (char i : stones) {
            if (helloooooo.find(i) != helloooooo.end()) {
                cnt++;
            }
        }

        return cnt;
    }
};