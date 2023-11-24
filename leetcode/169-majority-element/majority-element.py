class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        voting_count = 0
        current_candidate = None

        for num in nums:
            if voting_count == 0:
                current_candidate = num
            voting_count += (1 if num == current_candidate else -1)
        
        return current_candidate
        