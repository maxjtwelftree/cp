class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key = lambda x: x[1])
        print(intervals)
        cnt, k = 0, -inf
        # [[1, 2], [2, 3], [3, 4], [1, 3]]
        # [[1, 2], [1, 3], [2, 3], [3, 4]]

        for i, j in intervals:
            if i >= k:
                k = j
            else:
                cnt += 1
                
        return cnt