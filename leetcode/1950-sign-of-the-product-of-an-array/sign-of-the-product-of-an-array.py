class Solution:
    def arraySign(self, nums: List[int]) -> int:
        ans = reduce(operator.mul, nums, 1)
        if ans > 0:
            return 1 
        elif ans == 0:
            return 0
        return -1