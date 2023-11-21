class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> dp(365 + 1);
        return check(dp, days, costs, 0);
    }
    
    int check(vector<int>& dp, vector<int>& days, vector<int>& costs, int index) {
        if (index == days.size()) {
            return 0;
        }

        if (dp[index] != 0) {
            return dp[index];
        }

        int i, option1 = costs[0] + check(dp, days, costs, index + 1);

        i = index;
        while (i < days.size() && days[i] < days[index] + 7) {
            i++;
        }
        int option2 = costs[1] + check(dp, days, costs, i);

        i = index;
        while (i < days.size() && days[i] < days[index] + 30) {
            i++;
        }
        int option3 = costs[2] + check(dp, days, costs, i);
        
        return dp[index] = min({option1, option2, option3});
    }
};