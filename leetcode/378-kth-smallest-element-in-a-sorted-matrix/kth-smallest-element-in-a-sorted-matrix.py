class Solution:
    def kthSmallest(self, matrix: List[List[int]], k: int) -> int:
        answer_array = []
        for i in matrix:
            answer_array += i
        return sorted(answer_array)[k-1]