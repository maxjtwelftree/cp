class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        # hashmap
        # key = nums[i] 
        # val = nums[i] - k
        # [1,2,3,4], k = 5
        # bf solution = 
        hashmap, cnt = {}, 0
        
        for i in nums:
            if k - i in hashmap and hashmap[k-i] > 0:
                cnt += 1
                hashmap[k-i] -= 1
            elif i not in hashmap:
                hashmap[i] = 1
            else:
                hashmap[i] += 1
                
        return cnt                