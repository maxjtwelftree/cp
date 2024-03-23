class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int current_min = INT_MAX, current_max = -1;
        for (size_t i = 0; i < prices.size(); ++i) {
            current_min = min(current_min, prices[i]);
            current_max = max(current_max, prices[i] - current_min);
        }
        return current_max;
    }
};