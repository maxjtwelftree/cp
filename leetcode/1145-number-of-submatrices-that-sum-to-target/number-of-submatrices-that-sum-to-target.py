class Solution:
    def numSubmatrixSumTarget(self, matrix: List[List[int]], target: int) -> int:
        n, m = len(matrix[0]), len(matrix)
        count = 0     

        # gets prefix sum
        for row in matrix:
            for i in range(1, n):
                row[i] += row[i - 1]
        
        # find submatrices with sums equal to target
        for start_col in range(n):
            for end_col in range(start_col, n):
                cur_sum = 0
                sums = {0: 1}

                for row in matrix:
                    cur_sum += row[end_col] - (row[start_col - 1] if start_col > 0 else 0)
                    count += sums.get(cur_sum - target, 0)
                    sums[cur_sum] = sums.get(cur_sum, 0) + 1

        return count