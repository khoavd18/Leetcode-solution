class Solution:
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        i = set(nums1)
        j = set(nums2)

        a = i&j

        return list(a) 
