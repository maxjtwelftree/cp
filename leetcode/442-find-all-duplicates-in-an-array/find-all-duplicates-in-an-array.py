class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        checker, res = Counter(nums), []
        
        for i, j in checker.items():
            if j == 2:
                res.append(i)
        
        return res
        