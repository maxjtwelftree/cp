class Solution {
        // An Weng Dong Solution, watched video but
        // likely need to go over it more 
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a(numRows);
        // configures to the same as the triangle^^^^

        // iterate over with i 
        for (int i = 0; i < numRows; i++) {
            // i num rows, assigns i + 1, which means we are filling a (out vector with 1's like the triangle)
            a[i].assign(i + 1, 1);

            // enter the inner layer with the next for loop, as j = 1
            for (int j = 1; j < i; j++) {

                // self explanatory
                a[i][j]=a[i-1][j-1]+a[i-1][j]; 
            }
        }
        return a;
    }
};