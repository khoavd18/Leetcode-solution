class Solution:
    def reverseVowels(self, s: str) -> str:
        n = len(s)
        l,r = 0,n-1
        vowels = set('aeiouAEIOU')
        s = list(s)
        while l<r:
            if s[l] in vowels:
                if s[r] in vowels:
                    s[l],s[r] = s[r],s[l]
                    l+=1
                    r-=1
                else:
                    r-=1
            else:
                l+=1
        return ''.join(s)
