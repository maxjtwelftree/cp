class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size(), other = money;
        sort(prices.begin(), prices.end());
        money -= prices[0], money -= prices[1];
        return money < 0 ? other : money;
    }
};