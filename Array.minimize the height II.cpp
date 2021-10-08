class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int res=arr[n-1]-arr[0];
        int mx=INT_MIN;
        int mn=INT_MAX;
        
        for(int i=1;i<n;i++)
        {
            if(arr[i]>=k)
            {
                mx=max(arr[i-1]+k,arr[n-1]-k);
                mn=min(arr[i]-k,arr[0]+k);
                res=min(res,mx-mn);
            }
        }
        
        return res;
    }
};
