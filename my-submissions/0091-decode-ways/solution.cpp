class Solution {
public:
    int numDecodings(string s) {
        int n = s.size();
        if(n==0 || s[0] == '0') return 0;

        vector<int> dp(n+1,0);
        dp[0] = 1;
        dp[1] = (s[0] != '0') ? 1:0;
        for(int i=2;i<=n;i++){
            if(s[i-1] >= '1' && s[i-1] <= '9'){
                dp[i] +=dp[i-1];
            }

            int twoNum = (s[i-2]-'0')*10 + (s[i-1]-'0');
            if(twoNum >= 10 && twoNum <=26){
                dp[i] += dp[i-2];
            } 
        }
        return dp[n];
    }
};
