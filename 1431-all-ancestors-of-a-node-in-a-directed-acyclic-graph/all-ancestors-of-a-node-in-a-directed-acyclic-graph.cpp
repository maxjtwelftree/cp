struct Solution {
    void dfs(int node, int ancestor, vector<vector<int>>& adj_list, vector<vector<int>>& ancestors) {
        for (int child : adj_list[node]) {
            if (find(ancestors[child].begin(), ancestors[child].end(), ancestor) == ancestors[child].end()) {
                ancestors[child].push_back(ancestor);
                dfs(child, ancestor, adj_list, ancestors);
            }
        }
    }

    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj_list(n), ancestors(n);

        for (auto& edge : edges)
            adj_list[edge[0]].push_back(edge[1]);

        for (int i = 0; i < n; ++i) 
            dfs(i, i, adj_list, ancestors);

        return ancestors;
    }
};
