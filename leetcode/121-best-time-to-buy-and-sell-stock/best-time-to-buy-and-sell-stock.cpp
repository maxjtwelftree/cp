class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0;
        int j;
        int max_profit = 0;

        for (j = 1; j < prices.size(); j++) {
            if (prices[j] - prices[i] > 0) max_profit = max(max_profit, prices[j]-prices[i]);
            else
                i = j;
        }
        return max_profit;
    }
};