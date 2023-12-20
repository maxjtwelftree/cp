class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        auto checker_1 = INT_MAX, checker_2 = INT_MAX;
        for (auto x : prices) {
            if (x < checker_1) {
                checker_2 = checker_1;
                checker_1 = x;
            } else if (x < checker_2) checker_2 = x;
        }
        if (checker_1 + checker_2 <= money) return money - (checker_1 + checker_2);
        return money;
    }
};