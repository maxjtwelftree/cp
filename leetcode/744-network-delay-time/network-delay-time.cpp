class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> distance(n+1,INT_MAX);
        distance[k] = distance[0] = 0;
        vector<vector<pair<int,int>>> adj(n + 1);
        for (auto it : times){
            int u = it[0], v = it[1], weight = it[2];
            adj[u].push_back({v,weight}); // list of neighbours, adding to adj list
        }

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq; // min heap for djisktras 
        pq.push({0,k}); // starting node is k
        while (pq.size()){
            auto [weight,node] = pq.top();
            pq.pop();
            for (auto it:adj[node]){
                auto [v,dis_v] = it;
                if (weight + dis_v < distance[v]){
                    distance[v] = weight + dis_v;
                    pq.push({distance[v],v});
                }
            } 
        }

        int ans = 0;
        for (auto it : distance){
            ans = max(it,ans);
            if (ans == INT_MAX)
                return -1;
        }
        return ans;
    }
};