class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long int MOD = 1e9 + 7;
        long long ans = 0, count = 0, even = 0, odd = 0;

        for (int x : arr) {
            count += x;
            if (count % 2 == 1) {
                ans = (ans + even + 1) % MOD;
                odd++;
            } else {
                ans = (ans + odd) % MOD;
                even++;
            }
        }

        return ans % MOD;
    }
};