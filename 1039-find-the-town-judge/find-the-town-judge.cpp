class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if (n == 1) return 1;
        unordered_map<int, int> mapping{};

        for (const auto& x : trust) {
            mapping[x[0]]--, mapping[x[1]]++;
        }

        for (int i = 0; i <= n; ++i) {
            if (mapping[i] == n - 1) {
                return i;
            }
        }

        return n == 1 ? 1 : -1;
    }
};