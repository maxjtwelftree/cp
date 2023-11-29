class Solution:
    def numSub(self, s: str) -> int:
        check = ans = res = 0
        mod = 10 ** 9 + 7

        for char in s:
            if char == '1':
                check += 1
            elif char == '0':
                res += check * (check + 1) // 2 % mod
                check = 0
        
        return res + check * (check + 1) // 2 % mod

        