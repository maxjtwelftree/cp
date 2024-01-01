class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        ranges::sort(g), ranges::sort(s);
        size_t i{0};

        for (size_t j = 0; i < g.size() && j < s.size(); j++) {
            if (g[i] <= s[j]) i++;
        }

        return i;
    }
};