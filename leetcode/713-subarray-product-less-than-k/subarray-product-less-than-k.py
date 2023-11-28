class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        ans, product, left, right = 0, 1, 0, 0

        while right < len(nums):
            product *= nums[right]
            while product >= k and left <= right:
                product /= nums[left]
                left += 1
            ans += right - left + 1  
            right += 1
                
        return ans