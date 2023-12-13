class Solution:
    def arraySign(self, nums: List[int]) -> int:
        ans = prod(nums)
        if ans > 0:
            return 1 
        elif ans == 0:
            return 0
        return -1