class Solution:
    def minimumReplacement(self, nums: List[int]) -> int:
        n, cnt, elements = len(nums), 0, 0
        for i in range(n-2, - 1, -1):
            if nums[i] <= nums[i+1]:
                continue
            elements = (nums[i] + nums[i+1] - 1) // nums[i+1]
            cnt += elements - 1
            nums[i] = nums[i] // elements
        return cnt