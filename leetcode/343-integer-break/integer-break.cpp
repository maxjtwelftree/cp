class Solution {
public:
    int integerBreak(long long n) {
        if (n == 2) return 1;
        if (n == 3) return 2;
        if (n == 4) return 4;
        if (n == 5) return 6;
        if (n == 6) return 9;
        else {
            return integerBreak(n - 3) * 3;
        }
    }
};