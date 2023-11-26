class Solution:
    def largestSubmatrix(self, matrix: List[List[int]]) -> int:
        m, n = len(matrix), len(matrix[0])
        ans, checker = 0, [0] * n
        
        for i in range(m):
            for j in range(n):
                checker[j] = checker[j] + 1 if matrix[i][j] else 0
            for i, x in enumerate(sorted(checker, reverse = True)):
                ans = max(ans, x * (i + 1))

        return ans 

        