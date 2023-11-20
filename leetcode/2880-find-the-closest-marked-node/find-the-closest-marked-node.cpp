class Solution {
public:
    int minimumDistance(int n, vector<vector<int>>& edges, int s, vector<int>& marked) {
        // dijkstra
        // already have our graph 
        vector<vector<pair<int, int>>> adj(n);
        vector<int> table(n+1, INT_MAX);
        vector<int> dist(n+1, INT_MAX);
        set<int> remainingMarked(marked.begin(), marked.end());

        int cnt = 0;

        for (const auto& edge : edges) {
            adj[edge[0]].push_back({edge[1], edge[2]});
            // adj[v].push_back({u, weight}); // if undirected graph
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, s}); 
        vector<bool> visited(n + 1, false);
        dist[s] = 0;

        while (!pq.empty()) {
            int current_dist = pq.top().first;
            int curr = pq.top().second;
            pq.pop();

            if (remainingMarked.count(curr)) {
                return dist[curr];
            }

            if (dist[curr] < current_dist) continue;

            for (auto& [next, w] : adj[curr]) {
                if (dist[next] > current_dist + w) {
                    dist[next] = current_dist + w;
                    pq.push({dist[next], next});
                }
            }
        }

        return -1;
    }
};