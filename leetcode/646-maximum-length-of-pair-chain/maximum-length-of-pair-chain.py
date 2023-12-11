class Solution:
    def findLongestChain(self, pairs: List[List[int]]) -> int:
        pairs.sort(key=lambda x: x[1])
        print(pairs)
        curr, cnt = float('-inf'), 0
        for i in range(len(pairs)):
            if pairs[i][0] > curr:
                curr = pairs[i][1]
                cnt += 1
        return cnt
        