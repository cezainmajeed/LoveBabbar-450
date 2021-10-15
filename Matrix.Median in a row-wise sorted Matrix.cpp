class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here          
        int k=(r*c+1)/2;
        int a=INT_MAX,b=INT_MIN;
        for(int i=0;i<r;i++)
        {
            a=min(a,matrix[i][0]);
            b=max(b,matrix[i][c-1]);
        }
        
        while(a<b)
        {
            int m=(a+b)/2;
            int co=0;
            for(int i=0;i<r;i++)
            {
                co+=upper_bound(matrix[i].begin(),matrix[i].end(),m)-matrix[i].begin();
                //cout<<co<<endl;
            }
            if(co<k)
            a=m+1;
            else
            b=m;
        }
        return a;
    }
};
