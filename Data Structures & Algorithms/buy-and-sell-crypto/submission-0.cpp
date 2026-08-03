class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int currentprofit=0;
        for(int i=1;i<prices.size();i++){
            int diff=prices[i]-prices[i-1];
            currentprofit=max(0, currentprofit+diff);
            maxprofit=max(maxprofit, currentprofit);


        }
        return maxprofit;
    }
};
