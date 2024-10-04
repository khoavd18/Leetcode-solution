class Solution:
    def decodeString(self, s: str) -> str:
        n = len(s)
        cntst = []
        stringst = []
        res = ""
        num = 0

        for c in s:
            if c.isdigit():
                num = num * 10 + int(c)
            elif c == "[":
                cntst.append(num)
                stringst.append(res)
                res = ""
                num = 0
            elif c == "]":
                pre = stringst.pop()
                cnt = cntst.pop()

                res = pre + res * cnt
            else:
                res += c
        return res 

