class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        res = ""
        n = len(strs)
        for i in range(len(strs[0])):
            x = strs[0][i]
            for j in range(1,n):
                if i >= len(strs[j]) or strs[j][i] != x:
                    return res
            res+=x
        return res
