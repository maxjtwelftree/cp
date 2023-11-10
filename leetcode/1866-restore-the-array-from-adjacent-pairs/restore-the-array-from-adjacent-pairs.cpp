class Solution {
public:
    unordered_map<int, vector<int>> map;
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        vector<int>out;
        for (const auto& pair : adjacentPairs) {
            map[pair[0]].push_back(pair[1]);
            map[pair[1]].push_back(pair[0]);
        }

        int root = 0;
        for (auto& pair : map) {
            if (pair.second.size() == 1) {
                root = pair.first;
                break;
            }
        }

        dfs(root, INT_MAX, out);
        return out;
    }

    void dfs(int v, int prev, vector<int>& out) {
        out.push_back(v);
        for (int x : map[v]) {
            if (x != prev) {
                dfs(x, v, out);
            }
        }
    }
};