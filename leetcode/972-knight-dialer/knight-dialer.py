class Solution:
    def knightDialer(self, n: int) -> int:
        mod = 10**9 + 7
        array = [1 for _ in range(10)]

        for i in range(n - 1):
            checker_moves = [
                array[4]+array[6],
                array[6]+array[8],
                array[7]+array[9],
                array[4]+array[8],
                array[3]+array[9]+array[0],
                0,
                array[1]+array[7]+array[0],
                array[2]+array[6],
                array[1]+array[3],
                array[2]+array[4]
            ]
            array = checker_moves

        return sum(array) % mod