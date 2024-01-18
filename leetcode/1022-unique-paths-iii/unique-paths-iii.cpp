class Solution {
public:
    void backtracking(vector<vector<int>>& grid, int& paths, int x, int y, int emptyCount, int n, int m) {
        if (x < 0 || y < 0 || x >= n || y >= m || grid[x][y] == -1 || grid[x][y] == 3) return;

        if (grid[x][y] == 2) {
            if (emptyCount == 0) paths++;
            return;
        }

        if (grid[x][y] == 0) emptyCount--;

        int temp = grid[x][y];
        grid[x][y] = 3; 

        backtracking(grid, paths, x + 1, y, emptyCount, n, m);
        backtracking(grid, paths, x - 1, y, emptyCount, n, m);
        backtracking(grid, paths, x, y + 1, emptyCount, n, m);
        backtracking(grid, paths, x, y - 1, emptyCount, n, m);

        grid[x][y] = temp;  

        if (temp == 0) emptyCount++;
    }

    int uniquePathsIII(vector<vector<int>>& grid) {
        int paths = 0;
        int n = grid.size(), m = grid[0].size();

        int startX, startY, emptyCount = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == 1) {
                    startX = i;
                    startY = j;
                } else if (grid[i][j] == 0) emptyCount++;
            }
        }

        backtracking(grid, paths, startX, startY, emptyCount, n, m);
        return paths;
    }
};
