class Solution {
public:
    int numDistinct(string s, string t) {
        unsigned int n=s.length();
        unsigned int m=t.length();
        
        unsigned int dp[n+1][m+1];
        
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(j==0)
                    dp[i][j]=1;
                else if(i==0)
                    dp[i][j]=0;
                else
                {
                    if(s[i-1]==t[j-1])
                        dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
                    else
                        dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][m];
    }
};
