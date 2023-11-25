class Solution:
    def minimumMoves(self, s: str) -> int:
        res, checker = 0, 0

        while checker < len(s):
            if s[checker] == "X":
                res += 1
                checker += 2
            checker += 1
        
        return res

        