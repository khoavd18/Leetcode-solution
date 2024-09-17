class Solution:
    def addDigits(self, num: int) -> int:
        if num==0: return 0
        while num>=10:
            num = sum(int(digit) for digit in str(num))
        return num
