class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:        
        return sorted(nums1 + nums2)[len(nums1 + nums2) // 2] if len(nums1 + nums2) % 2 == 1 else \
        (float(sorted(nums1 + nums2)[len(nums1 + nums2) // 2 - 1]) + float(sorted(nums1 + nums2)[len(nums1 + nums2) // 2])) / 2.0 