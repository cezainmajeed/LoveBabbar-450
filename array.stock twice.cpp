class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int first_buy=INT_MIN;
        int first_sell=0;
        int second_buy=INT_MIN;
        int second_sell=0;
        
        for(int i=0;i<nums.size();i++)
        {
            first_buy=max(first_buy,-nums[i]);
            first_sell=max(first_sell,first_buy+nums[i]);
            
            second_buy=max(second_buy,first_sell-nums[i]);
            second_sell=max(second_sell,second_buy+nums[i]);
        }
        
        return second_sell;
    }
};
