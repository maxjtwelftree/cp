class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_curr = -1, min_curr = INT_MAX;

        for (int i = 0; i < prices.size(); ++i) {
            min_curr = min(min_curr, prices[i]);
            max_curr = max(max_curr, prices[i] - min_curr);
        }

        // 7,6,4,3,1
        // 7,1,5,3,6,4
        // min = 7
        // MAX = 0

        return max_curr;        
    }
};