class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid[0].size(), m = grid.size();
        queue<pair<int, int>> q;
        int max_area = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1) {
                    int area = 0;
                    q.push({i, j});
                    grid[i][j] = 2;
                    while (!q.empty()) {
                        area++;
                        int curr_i = q.front().first;
                        int curr_j = q.front().second;
                        q.pop();
                        if (curr_i - 1 >= 0 && grid[curr_i - 1][curr_j] == 1) {
                            q.push({curr_i -1, curr_j});
                            grid[curr_i - 1][curr_j] = 2;
                        }
                        if (curr_i + 1 < m && grid[curr_i + 1][curr_j] == 1) {
                            q.push({curr_i + 1, curr_j});
                            grid[curr_i + 1][curr_j] = 2;
                        }
                        if (curr_j - 1 >= 0 && grid[curr_i][curr_j - 1] == 1) {
                            q.push({curr_i, curr_j - 1});
                            grid[curr_i][curr_j - 1] = 2;
                        }
                        if (curr_j + 1 < n && grid[curr_i][curr_j + 1] == 1) {
                            q.push({curr_i, curr_j + 1});
                            grid[curr_i][curr_j + 1] = 2;
                        }
                        max_area = max(max_area, area); 
                    }
                }
            }
        }
        return max_area;
    }
};