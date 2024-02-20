class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int tracking = 0;

        for (size_t i = 1; i < prices.size(); ++i) {
            if (prices[i] - prices[i - 1] > 0) {
                tracking += prices[i] - prices[i - 1];
            }
        }

        return tracking;
    }
};