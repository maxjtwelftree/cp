class Solution:
    def findLengthOfLCIS(self, nums: List[int]) -> int:
        ans, max_ans = 1, 1

        for i in range(1,len(nums)):
            if nums[i] > nums[i-1]:
                ans += 1 
            else:
                max_ans = max(max_ans, ans)
                ans = 1

        return max(ans, max_ans)
        