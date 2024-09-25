class Solution:
    def getHint(self, secret: str, guess: str) -> str:
        bulls = 0
        cows = 0

        secret_cnt = [0]*10
        guess_cnt = [0]*10

        for i in range(len(secret)):
            if secret[i] == guess[i]:
                bulls+=1
            else:
                secret_cnt[int(secret[i])]+=1
                guess_cnt[int(guess[i])]+=1
        
        for i in range(10):
            cows += min(secret_cnt[i],guess_cnt[i])
        return f"{bulls}A{cows}B"
