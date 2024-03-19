class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        summer, counter = sum(nums), 0

        for i in range(len(nums)):
            counter += nums[i]
            if (counter == summer): return i
            summer -= nums[i]

        return -1