int minimumNumberOfSwaps(string s){
        int open=0,close=0;
        int swap=0,imbalance=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='[')
            {
                open++;
                if(imbalance>0)
                {
                    swap+=imbalance;
                    imbalance--;
                }
            }
            if(s[i]==']')
            {
                close++;
                imbalance=close-open;
            }
        }
        return swap;
    }
