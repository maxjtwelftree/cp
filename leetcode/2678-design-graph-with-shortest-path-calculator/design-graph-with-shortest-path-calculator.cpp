class Graph {
public:
    const int n;
    vector<vector<int>> edges;
    Graph(int n, vector<vector<int>>& edges) : n(n), edges(edges) {
    }
    
    void addEdge(vector<int> edge) {
        edges.push_back(edge);
    }
    
    int shortestPath(int node1, int node2) {
        if (node1 == node2) {
            return 0;
        }

        vector<int> dp(n, INT_MAX);
        dp[node1] = 0;
        for (bool mark = true; mark;) {
            mark = false;
            for (const auto& edge : edges) {
                if (dp[edge[0]] == INT_MAX) {
                    continue;
                }
                if (dp[edge[1]] > dp[edge[0]] + edge[2]) {
                    dp[edge[1]] = dp[edge[0]] + edge[2];
                    mark = true;
                }
            }
        }
        return dp[node2] == INT_MAX ? -1 : dp[node2];
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */