class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid[0].size(), m = grid.size();
        queue<pair<int, int>> q;
        int islands = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    islands++;
                    q.push({i, j});
                    while (!q.empty()) {
                        int curr_i = q.front().first;
                        int curr_j = q.front().second;
                        q.pop();
                        if (curr_i - 1 >= 0 && grid[curr_i - 1][curr_j] == '1') {
                            q.push({curr_i -1, curr_j});
                            grid[curr_i - 1][curr_j] = '2';
                        }
                        if (curr_i + 1 < m && grid[curr_i + 1][curr_j] == '1') {
                            q.push({curr_i + 1, curr_j});
                            grid[curr_i + 1][curr_j] = '2';
                        }
                        if (curr_j - 1 >= 0 && grid[curr_i][curr_j - 1] == '1') {
                            q.push({curr_i, curr_j - 1});
                            grid[curr_i][curr_j - 1] = '2';
                        }
                        if (curr_j + 1 < n && grid[curr_i][curr_j + 1] == '1') {
                            q.push({curr_i, curr_j + 1});
                            grid[curr_i][curr_j + 1] = '2';
                        }

                    }
                }

            }
        }
        return islands;
    }
};