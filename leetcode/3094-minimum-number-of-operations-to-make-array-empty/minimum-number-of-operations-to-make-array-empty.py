class Solution:
    def minOperations(self, nums: List[int]) -> int:
        num_counts = Counter(nums)
        cnt = 0
        for num, count in num_counts.items():
          if count == 1:
            return -1
          else:
            cnt = cnt + ((count + 2) // 3)
        

        return cnt 

        