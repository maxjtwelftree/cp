class Solution:
    def numberOfWays(self, corridor: str) -> int:
        mod = 10**9 + 7
        a, b, c = 0, 0, 1 # a = 0 seats, b = 1 seat, c = 2 seats

        for checker in corridor:
            if checker == 'S':
                a = b
                b, c = c, b
            else:
                c = (c + a) % mod
        return a
        