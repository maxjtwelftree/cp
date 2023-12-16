class Solution:
    def findMin(self, nums: List[int]) -> int:
        left, right = 0, len(nums)-1

        while left < right:
            mid = (left + right)//2
            mins = min(nums)
            if nums[mid] > nums[right]:
                left = mid + 1
            elif nums[mid] == nums[right]:
                right -= 1
            else:
                right = mid
            

        return nums[left]
        