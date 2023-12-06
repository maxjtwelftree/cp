class Solution:
    def totalMoney(self, n: int) -> int:
        ans, i = 0, 0
        for x in range(n):
            if x % 7 == 0:
                i += 1
            ans += i + x % 7
        return ans