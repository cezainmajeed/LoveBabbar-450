long long int  countPS(string str)
    {
       //Your code here
       int n=str.length();
       long long int mod=1e9+7;
       vector<vector<long long int>> dp(n,vector<long long int>(n));
       
       for(int i=0;i<n;i++)
       {
           dp[i][i]=1;
       }
       
       for(int i=0;i<n-1;i++)
       {
           int j=i+1;
           if(str[i]==str[j])
           dp[i][j]=3;
           else
           dp[i][j]=2;
       }
       
       for(int k=1;k<n;k++)
       {
           int i=0,j=k;
           while(i<n && j<n)
           {
               if(str[i]==str[j])
               dp[i][j]=1+dp[i+1][j]+dp[i][j-1];
               else
               dp[i][j]=dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1];
               
               dp[i][j]+=mod;
               dp[i][j]%=mod;
               i++;
               j++;
           }
       }
       
       return dp[0][n-1];
    }
