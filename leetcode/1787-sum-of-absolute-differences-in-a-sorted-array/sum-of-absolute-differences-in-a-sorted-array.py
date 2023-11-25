class Solution:
    def getSumAbsoluteDifferences(self, nums: List[int]) -> List[int]:
        prefix_check = [0]
        for num in nums:
            prefix_check.append(prefix_check[-1] + num)
        return [(num*(i+1) - prefix_check[i+1]) + (prefix_check[-1]-prefix_check[i] - (len(nums)-i)*num) for i, num in enumerate(nums)]
