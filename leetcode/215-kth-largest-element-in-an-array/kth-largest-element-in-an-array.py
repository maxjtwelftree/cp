class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        nums.sort(reverse = True)
        return nums[k-1]
        # [3,2,1,5,6,4]
        #  1,2,3,4,5,6
        # k = 2
        