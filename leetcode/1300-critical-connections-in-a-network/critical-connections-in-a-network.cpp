class Solution {
public:
    void tarjans(int i, int p, vector<int>& out, int v1[], int v2[], int& cnt, vector<int>adj[], vector<vector<int>>& ans) {
        out[i]=1;
        v1[i]=cnt;
        v2[i]=cnt;
        cnt++;
        for(auto it: adj[i]){
            if(it==p){continue;}
            if(out[it]){v1[i]=min(v1[i], v1[it]);}
            else{
                tarjans(it, i, out, v1, v2, cnt, adj, ans);
                v1[i]=min(v1[i], v1[it]);
                if(v1[it]>v2[i]){
                    ans.push_back({i, it});
                }
            }
        }
        
    }
    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int>adjacency[n];
        
        for(int i = 0; i < connections.size(); i++){
            adjacency[connections[i][0]].push_back(connections[i][1]);
            adjacency[connections[i][1]].push_back(connections[i][0]);
        }
        
        int cnt = 1;
        vector<int>out(n, 0);
        
        int v1[n], v2[n];
        vector<vector<int>>ans;
        tarjans(0, -1, out, v1, v2, cnt, adjacency, ans);
        return ans;
        
    }
};