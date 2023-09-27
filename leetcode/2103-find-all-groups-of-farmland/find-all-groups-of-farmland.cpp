class Solution {
public:
// need to pass by reference (&)
    void dfs(vector<vector<int>>& land, int r, int c, vector<vector<bool>>& vis, vector<int>& ans) {
        int R = land.size();
        int C = land[0].size();

        vis[r][c] = true;

        // this is the end 
        if ((r == R -1 || (r + 1 <= R - 1 && land[r + 1][c] == 0)) &&
            (c == C - 1 || (c + 1 <= C - 1 && land[r][c + 1] == 0))) {
            ans.push_back(r);
            ans.push_back(c);
            return;
        }

        // dfs code 

        // this finds the end part of the farm


        // THIS IS US EXPLORING IN THESE FOUR DIRECTIONS FOR ROWS AND COLUMNS
        int dr[4] = {0, 0, -1, 1};
        int dc[4] = {1, -1, 0, 0};

        for (int i = 0; i < 4; i++) {
            // this is the four directions
            int rr = r + dr[i];
            int cc = c + dc[i];
            // validate the coordinate 
            if (rr >= 0 && cc >= 0 && rr <= R-1 && cc <= C-1 && land[rr][cc] == 1 && !vis[rr][cc]) {
                dfs(land, rr, cc, vis, ans);
            }
        }
    }

    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int R = land.size();
        int C = land[0].size();

        vector<vector<int>> res;    
        vector<vector<bool>> vis(R, vector<bool>(C, false));

        // dfs approach;
        for (int i = 0; i < R; i++) {
            for (int j = 0; j < C; j++) {
                if (land[i][j] == 1 && !vis[i][j]) {
                    vector<int> ans;
                    // this contains first coordinates
                    ans.push_back(i);
                    ans.push_back(j);

                    // DFS here 
                    dfs(land, i, j, vis, ans);
                    res.push_back(ans);


                }
            }
        }

        return res;        
    }
};