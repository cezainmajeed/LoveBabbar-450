class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int far=0,end=0,jumps=0;
        
        for(int i=0;i<n;i++)
        {
            far=max(far,i+arr[i]);
            
            if(far==i)
            return -1;
            
            if(far>=n-1)
            return jumps+1;
            
            if(i==end)
            {
                jumps++;
                end=far;
            }
        }
        
        return jumps;
    }
};
