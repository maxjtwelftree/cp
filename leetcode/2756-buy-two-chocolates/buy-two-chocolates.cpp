class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        auto checker_1 = std::numeric_limits<int>::max();
        auto checker_2 = std::numeric_limits<int>::max();

        for (auto x : prices) {
            if (x < checker_1) {
                checker_2 = checker_1;
                checker_1 = x;
            } else if (x < checker_2) checker_2 = x;
        }

        int total_cost = checker_1 + checker_2;
        return (total_cost <= money) ? (money - total_cost) : money;
    }
};