class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        return [key for key, _ in collections.Counter(nums).most_common(k)]
        # makes a counter for the elements in nums
        # most_common returns the k most common elements 
        # O(n), 


        