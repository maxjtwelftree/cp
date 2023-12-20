class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        auto n = prices.size();
        auto other = money;
        nth_element(prices.begin(), prices.begin(), prices.end());
        money -= prices[0], money -= prices[1];
        return money < 0 ? other : money;
    }
};