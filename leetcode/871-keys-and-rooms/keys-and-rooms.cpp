class Solution {
public:
    void dfs (int v, vector<int>&vis, vector<vector<int>>& rooms) {
        vis[v] = true;

        for (auto u : rooms[v]) {
            if (!vis[u]) {
                dfs(u, vis, rooms);
            }
        }
    }

    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();

        vector<int> vis(n);

        dfs(0, vis, rooms);
        

        for (auto u : vis) {
            if (u == 0) {
                return false;
            }
        }

        return true;

        


        // DFS
        // where with each room (node) we visit we collect that nums[i] key, and then if we have key = room as we DFS we can continue, if we dont we cannot

        // we know we are at true if we have searched all rooms otherwise we return false


 
        
    }
};