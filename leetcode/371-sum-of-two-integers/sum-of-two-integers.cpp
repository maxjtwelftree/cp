class Solution {
public:
    int getSum(int a, int b) {
        vector<int> out{a, b};
        return accumulate(out.begin(), out.end(), 0);
    }
};