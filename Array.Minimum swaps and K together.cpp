int minSwap(int *arr, int n, int k) {
    int co=0,i;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=k)
        co++;
    }
    int res,curr=0;
    for(int i=0;i<co;i++)
    {
        if(arr[i]>k)
        curr++;
    }
    res=curr;
    for(i=co;i<n;i++)
    {
        if(arr[i]>k)
        curr++;
        if(arr[i-co]>k)
        curr--;
    
        res=min(res,curr);
    }
    return res;
}
