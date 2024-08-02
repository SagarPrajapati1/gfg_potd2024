class Solution {
  public:
    int editDistance(string str1, string str2) {
         int m = str1.length();
        int n = str2.length();
        int dp[m+1][n+1] = {0};
        
        for(int i = 0; i <= m; i++) dp[i][0] = i;
        
        for(int j = 0; j <= n; j++) dp[0][j] = j;

        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(str1[i - 1] == str2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1];
                } else {
                    dp[i][j] = 1 + min(min(dp[i][j - 1], dp[i - 1][j]), dp[i-1][j-1]);
                }
            }
            
        }
        return dp[m][n];
    }
};
