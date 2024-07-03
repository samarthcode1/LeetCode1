class Solution {
public:
    int find(int i,int buy,vector<vector<int>>& dp,vector<int>& prices){
        int n=prices.size();
        if(i>=n){
            return 0;
        }
        if(dp[i][buy]!=-1){
            return dp[i][buy];
        }
        int profit=0;
        if(buy){
            profit=max((-prices[i]+find(i+1,0,dp,prices)),(find(i+1,1,dp,prices)));
        }
        else{
            profit=max((prices[i]+find(i+2,1,dp,prices)),(find(i+1,0,dp,prices)));
        }
        return dp[i][buy]=profit;
    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return find(0,1,dp,prices);
    }
};