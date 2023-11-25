class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        frequency_finder = Counter(nums)

        sorted_nums = sorted(frequency_finder.items(), key=lambda item: item[1])
        single_numbers = [num for num, freq in sorted_nums if freq == 1]

        return single_numbers[:2]

