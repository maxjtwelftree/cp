class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> graph(n + 1);
        vector<int> table(n + 1, INT_MAX);
        table[k] = 0;

        for (auto vec : times) {
            int u = vec[0], v = vec[1], w = vec[2];
            graph[u].push_back(make_pair(v, w));
        }

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        pq.push(make_pair(0, k));

        while(!pq.empty()) {
            int curr_weight = pq.top().first;
            int curr_node = pq.top().second;
            pq.pop();

            for (int i = 0; i < graph[curr_node].size(); i++) {
                int next_node = graph[curr_node][i].first;
                int next_weight = graph[curr_node][i].second; 
            
                if (table[next_node] > curr_weight + next_weight) {
                    table[next_node] = curr_weight + next_weight;
                    pq.push(make_pair(table[next_node], next_node));
                }
            }
        }

        int result = 0;

        for (int i = 1; i <= n; i++) {
            if (table[i] == INT_MAX) {
                return -1;
            }
            else if (table[i] > result) {
                result = table[i];
            }
        }
        return result;
    }
};