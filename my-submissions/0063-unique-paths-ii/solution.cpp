class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        if(n==0) return 0;
        if(m==0) return 0;
        vector<vector<int>> dp(n,vector<int>(m,0));
        if(obstacleGrid[0][0] == 1 || obstacleGrid[n-1][m-1] == 1) return 0;
        //base
        dp[0][0] = 1;
        //check row
        for(int i=1;i<n;i++){
            if(obstacleGrid[i][0] == 0){
                dp[i][0] = dp[i-1][0];
            }
            else break;
        }
        //check column
        for(int j=1;j<m;j++){
            if(obstacleGrid[0][j] == 0){
                dp[0][j] = dp[0][j-1];
            }
            else break;
        }
        //

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                dp[i][j] = (obstacleGrid[i-1][j] == 0 ? dp[i-1][j] : 0) + (obstacleGrid[i][j-1] == 0 ? dp[i][j-1] : 0);
            }
        }
        return dp[n-1][m-1];
    }
};
