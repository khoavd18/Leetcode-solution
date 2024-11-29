class Solution:
    def canJump(self, nums: List[int]) -> bool:
        n = len(nums)
        m = 0


        for i in range(n):
            if i > m:
                return False
            m = max(m,i+nums[i])
            if m > n-1:
                return True
            
        return True

