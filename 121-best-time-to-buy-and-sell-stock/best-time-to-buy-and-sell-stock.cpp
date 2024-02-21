class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len=prices.size();
        int small=INT_MAX;
        int profit=0;
        int i=0;
        while(i<len){
            small=min(small,prices[i]);
            if(small<=prices[i]){
                profit=max(profit,prices[i]-small);
                i++;
            }
        }
        return profit;
        
        // vector<int>v;
        // for(int i=0;i<len;i++){
        //     if(prices[i]<prices[i+1]){
        //         v.push_back(prices[i]);
        //     }
        // }
        // if(prices[len-1]==small){
        //     return 0;
        // }
        // else{
        //     return largest-small;
        // }
    }
};