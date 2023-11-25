class Solution:
    def getSumAbsoluteDifferences(self, nums: List[int]) -> List[int]:
        n = len(nums)
        prefix_check = [nums[0]]
        ans = []
        # vector call = [], len = size

        for i in range(1, n): # i to n, from 1 not 0
            # append = pushback in python
            prefix_check.append(prefix_check[-1] + nums[i])
        
        for i in range(len(nums)):
            left_summing = prefix_check[i] - nums[i]
            right_summing = prefix_check[-1] - prefix_check[i]

            left_counting = i
            right_counting = n - 1 - i

            left_total = left_counting * nums[i] - left_summing
            right_total = right_summing - right_counting * nums[i]

            ans.append(left_total + right_total)


        return ans 
        