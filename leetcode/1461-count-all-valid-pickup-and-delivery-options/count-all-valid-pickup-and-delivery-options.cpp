class Solution {
public:
    int countOrders(int n) {
        const int mod = 1e9 + 7;
        long long final = 1;
        for (int i = 2; i <= n; i++) final = (final * i * (2 * i - 1)) % mod;
        return static_cast<int>(final);
    }
};