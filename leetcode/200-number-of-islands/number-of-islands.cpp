class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int islands = 0;
        queue<pair<int, int>> q;


        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    islands++;
                    q.push({i,j});

                    while(!q.empty()) {
                        /*1. process node */ 
                        int curr_i = q.front().first;
                        int curr_j = q.front().second;
                        q.pop();
                        /*2. add children*/ 
                        // up
                        if(curr_i - 1 >= 0 && grid[curr_i - 1][curr_j] == '1') {
                            q.push({curr_i - 1, curr_j});
                            grid[curr_i-1][curr_j] = '9';

                        }
                        //down
                        if(curr_i + 1 < m && grid[curr_i + 1][curr_j] == '1') {
                            q.push({curr_i + 1, curr_j});
                            grid[curr_i+1][curr_j] = '9';
                        }
                        //left
                        if(curr_j - 1 >= 0 && grid[curr_i][curr_j - 1] == '1') {
                            q.push({curr_i, curr_j-1});
                            grid[curr_i][curr_j-1] = '9';
                        }
                        //right
                        if(curr_j + 1 < n && grid[curr_i][curr_j + 1] == '1') {
                            q.push({curr_i, curr_j+1});
                            grid[curr_i][curr_j+1] = '9';
                        }                     
                        // go to next
                    }

                }

            }        
        }
        return islands;
    }
};