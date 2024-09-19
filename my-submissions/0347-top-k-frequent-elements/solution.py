class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = Counter(nums)

        sort_e = sorted(count.keys(),key=lambda x:count[x],reverse = True)

        top = sort_e[:k]
        return top
