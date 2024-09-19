class Solution:
    

    def partition(self, s: str) -> List[List[str]]:
        res = []
        def palindrome(sub):
            return sub == sub[::-1]

        def backtracking(start,path):

            if start == len(s):
                res.append(path[:])
                return 
            
            for end in range(start+1,len(s)+1):

                sub = s[start:end]
                if(palindrome(sub)):
                    path.append(sub)
                    backtracking(end,path)
                    path.pop()
        
        backtracking(0,[])
        return res

