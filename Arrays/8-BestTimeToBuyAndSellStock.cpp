class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int currProfit=0;
        for ( int i =1 ; i < prices.size() ;i++)
        {
            currProfit += prices[i]-prices[i-1];
            if(currProfit > maxProfit)
            {
                maxProfit = currProfit;
            }
            if(currProfit < 0){
                currProfit =0;
            }
        }
        return maxProfit;
         
        
    }
};
