class Solution:
    def canJump(self, nums: List[int]) -> bool:
        goal = 0

        for i in range(len(nums)):
            if i > goal:
                return False
            goal = max(goal, nums[i] + i)
        
        return True