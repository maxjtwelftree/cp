class Solution:
    def findMinimumOperations(self, s1: str, s2: str, s3: str) -> int:
        lengths = len(s1) + len(s2) + len(s3)
        checker = 0

        for first, second, third in zip(s1, s2, s3):
            if not (first == second == third): break
            checker += 1
        
        if not (s1[0] == s2[0] == s3[0]):
            return -1
        
        return lengths - checker * 3
        