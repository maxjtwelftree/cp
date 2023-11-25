class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}

        for i in range(len(nums)):
            hashmap[nums[i]] = i

        for i in range(len(nums)):
            newer = target - nums[i]
            if newer in hashmap and hashmap[newer] != i:
                return [i, hashmap[newer]]