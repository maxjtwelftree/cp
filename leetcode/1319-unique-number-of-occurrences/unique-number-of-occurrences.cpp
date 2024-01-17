class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mapping;

        for (auto x : arr) mapping[x]++;


        vector<pair<int, int>> out(mapping.begin(), mapping.end());
        sort(out.begin(), out.end(), [] (const auto x, const auto y) {
            return x.second > y.second;
        });

        for (int i = 1; i < out.size(); ++i) {
            if (out[i].second == out[i-1].second) return false;
        }
        return true;
    }
};