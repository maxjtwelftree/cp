class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a(numRows);
        // An Weng Dong Solution, watched video but
        // likely need to go over it more 
        for (int i = 0; i < numRows; i++) {
            a[i].assign(i + 1, 1);
            for (int j = 1; j < i; j++) {
                a[i][j]=a[i-1][j-1]+a[i-1][j]; 
            }
        }
        return a;
    }
};