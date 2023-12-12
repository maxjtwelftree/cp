class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        # sliding window decrement k as we see ones and return max window 
        
        original = k
        n = len(nums)
        max_length = 0
        i = j = cnt = 0

        while j < n:          
            if nums[j] == 0:
                cnt += 1
           
            while cnt > k:
                if nums[i] == 0:
                    cnt -= 1
                i += 1
            max_length = max(max_length, j - i + 1)
            j += 1
        
        return max_length
        