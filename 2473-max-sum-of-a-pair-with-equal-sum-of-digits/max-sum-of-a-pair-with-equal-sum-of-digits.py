class Solution:
    def maximumSum(self, nums: List[int]) -> int:
        dictionary = defaultdict(list)

        for num in nums:
            digit_sum = sum(int(digit) for digit in str(num)) 
            dictionary[digit_sum].append(num)

        current_max = -1

        for group in dictionary.values():
            if len(group) >= 2:
                group.sort(reverse=True) 
                current_max = max(current_max, group[0] + group[1])
        
        return current_max