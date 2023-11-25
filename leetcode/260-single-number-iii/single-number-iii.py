class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        frequencies = Counter(nums)
        return([i for i in frequencies if frequencies[i] == 1])

