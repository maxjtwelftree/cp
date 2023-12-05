class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        right, left = len(nums) - 1, 0

        while left < right:
            middle = left + (right - left + 1) // 2
            print(middle)
            if nums[middle] < nums[middle -1 ]:
                right = middle - 1
            else: 
                left = middle 

        return left