class Solution:
    def numSpecial(self, mat: List[List[int]]) -> int:
        n, m, cnt = len(mat[0]), len(mat), 0
        
        for i in range(n):
            for j in range(m):
                if mat[j][i] == 1:
                    if sum(mat[j]) == 1 and sum(row[i] for row in mat) == 1:
                        cnt += 1
        return cnt 
            