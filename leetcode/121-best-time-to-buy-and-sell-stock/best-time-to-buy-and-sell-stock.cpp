class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buyPrice = INT_MAX;
        int max_profit = 0;
        
        for (int i = 0; i < n; i++) {
            buyPrice = min(buyPrice, prices[i]);
            max_profit = max(max_profit, prices[i] - buyPrice);
        }
        return max_profit;
    }
};