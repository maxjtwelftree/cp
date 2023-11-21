class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        int n = isWater.size(), m = isWater[0].size();
        queue<pair<int,int>> q;

        // change our matrix so all water is 0 and then our land is -1 (unvisited)
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // changes land cells (the only ones we need to visit)
                if (isWater[i][j] == 0) {
                    isWater[i][j] = -1;
                } else {
                    // changes water cells
                    isWater[i][j] = 0;
                    // push these to our queue as this is where we want to start our 
                    // traversal
                    q.push({i, j});
                }
            }
        }

        int increaser = 0;  
        while (!q.empty()) {
            int len = q.size();
            
            for (int k = 0; k < len; k++) {
                pair<int, int> checkers = q.front(); q.pop();
                int i = checkers.first, j = checkers.second;

                if (i > 0 && isWater[i-1][j] == -1) {
                    isWater[i-1][j] = increaser + 1;
                    q.push({i-1, j});
                } 
                if ((i < n - 1) && isWater[i+1][j] == -1) {
                    isWater[i+1][j] = increaser + 1;
                    q.push({i+1, j});
                }
                if (j > 0 && isWater[i][j-1] == -1) {
                    isWater[i][j-1] = increaser + 1;
                    q.push({i, j-1});
                }
                if ((j < m - 1) && isWater[i][j+1] == -1) {
                    isWater[i][j+1] = increaser + 1;
                    q.push({i, j+1});
                }
            }
            increaser++;
        }

        return isWater;
    }
};