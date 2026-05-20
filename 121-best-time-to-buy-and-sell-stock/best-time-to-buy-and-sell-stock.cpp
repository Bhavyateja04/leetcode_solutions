class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minprice=prices[0];
        int n=prices.size();
        if(prices.empty()) return 0;
        for (int i=1;i<n;i++){
            if(prices[i]<minprice){
                minprice=prices[i];
            }
            else{
                maxprofit=max(maxprofit, prices[i]-minprice);
            }
        }
        return maxprofit;
    }
};