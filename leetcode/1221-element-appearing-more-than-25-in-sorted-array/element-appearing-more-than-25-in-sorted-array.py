class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        average = int(len(arr) / 4)
        ans = Counter(arr).items()
        for x, y in ans:
            if y > average:
                return x
        return 0        