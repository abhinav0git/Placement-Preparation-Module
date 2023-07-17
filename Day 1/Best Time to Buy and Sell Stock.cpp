class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int minsofar = INT_MAX;
        int maxprofit = INT_MIN;

        for(int i=0;i<prices.size();i++)
        {
            minsofar = min(minsofar,prices[i]);
            maxprofit = max(maxprofit,abs(minsofar-prices[i]));
        }
        return maxprofit;
    }
};
