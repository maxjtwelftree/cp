class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:
        intervals.sort(key = lambda x: x[1])
        cnt, k = 0, -inf

        for i, j in intervals:
            if i >= k:
                k = j
            else:
                cnt += 1
                
        return cnt