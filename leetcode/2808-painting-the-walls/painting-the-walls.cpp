class Solution {
public:
    int paintWalls(vector<int>& cost, vector<int>& time) {
        // get the number of walls to begin 
        int n = cost.size(); // this could be time 
        // make a dp array, that is storing the min cost 
        vector<int> dp(n + 1, 1e9); // ie9 due to constraints
        // this is our base case as the 
        // minimum cost to paint 0 walls is 0
        dp[0] = 0; 
        // iterate through each wall forward and reverse 

        for (int i = 0; i < n; i++) {
            for (int j = n; j > 0; j--) {
                // Calculate the minimum cost to paint 'j' walls using the current wall 'i'
                // The minimum cost at 'j' is the minimum of:
                // - The cost of painting the current wall 'i'
                // the cost of painting the previous walls 
                // (dp[j - time[i] - 1])
                // - The cost of painting the previous walls
                // without using the current wall 'i' (dp[j])
                dp[j] = min(dp[j], dp[max(j-time[i] - 1, 0)] + cost[i]);
            }
        }
        return dp[n]; // The minimum cost to paint all 'n' walls is stored in dp[n]   
    }
};