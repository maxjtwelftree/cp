class Solution:
    def countKDifference(self, nums: List[int], k: int) -> int:
        seen_values, counter = defaultdict(int), 0
        
        for num in nums:
          counter += seen_values[num+k] + seen_values[num-k] # -> 
          seen_values[num] += 1
        
        return counter
        