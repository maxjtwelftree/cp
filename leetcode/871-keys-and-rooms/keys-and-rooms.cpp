class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> vis (n, 0);
        queue<int> q;
        q.push(0);

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            vis[node] = 1;
            for (auto valid : rooms[node]) {
                if (vis[valid] == 0) {
                    q.push(valid);
                }
            }
        }

        for (auto valid : vis) {
            if (valid == 0) {
                return false;
            }
        }

        return true;
    }
};