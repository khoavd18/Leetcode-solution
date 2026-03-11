class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        res = []
        for n in range(left, right+1):
            if self.isdv(n):
                res.append(n)
        return res


    def isdv(self, n : int) -> bool:
        tmp = n
        while tmp>0:
            digit = tmp % 10
            if digit == 0 or n % digit != 0: return False
            tmp//=10
        return True

