class Solution {
public:
    bool dfs(int i,int j,int m,int n,vector<vector<char>>& board, string word,int k) {
        if (k >= word.size()) {
            return true;
        } if (i < 0 || j < 0 || i == m || j == n || board[i][j] != word[k]) {
            return false;
        }

        char ch = board[i][j];
        board[i][j] = '#';
        bool check1 = dfs(i+1,j,m,n,board,word,k+1); 
        bool check2 = dfs(i,j+1,m,n,board,word,k+1); 
        bool check3 = dfs(i-1,j,m,n,board,word,k+1); 
        bool check4 = dfs(i,j-1,m,n,board,word,k+1);
        board[i][j]=ch;
        return check1 || check2 || check3 || check4;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board[0].size(), m = board.size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == word[0]) {
                    if (dfs(i,j,m,n,board,word,0)) {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};