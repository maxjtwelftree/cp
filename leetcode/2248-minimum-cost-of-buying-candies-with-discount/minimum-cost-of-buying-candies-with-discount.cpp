class Solution {
public:
    int minimumCost(vector<int>& cost) {
        if (cost.size() == 0) return 0;
        sort(cost.begin(), cost.end(), greater<int>());
        int sum = 0, count = 1;
        for (auto x: cost) {
            if (count++ % 3) {
                sum += x;
            }
        }
        return sum;
    }
};