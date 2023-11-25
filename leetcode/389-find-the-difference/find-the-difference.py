class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        return list(Counter(t) - Counter(s))[0]
        # constructing counters is O(n)

        
        