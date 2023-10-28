class Solution {
public:
using i64 = long long;
const int MOD = 1e9+7;
    int countVowelPermutation(int n) {
        i64 a = 1, e = 1, i = 1, o = 1, u = 1;

        for (int j = 1; j < n; j++) {
            i64 a_next = e;
            i64 e_next = (a + i) % MOD;
            i64 i_next = (a + e + o + u) % MOD;
            i64 o_next = (i + u) % MOD;
            i64 u_next = a;

            a = a_next, e = e_next, i = i_next, o = o_next, u = u_next;
        }

        return (a + e + i + o + u) % MOD;        
    }
};