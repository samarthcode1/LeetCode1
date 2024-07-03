class Solution {
public:
    int find(int i,int buy,int count,vector<vector<vector<int>>>& dp,vector<int>& prices,int n){
        if(i==n || count==0){
            return 0;
        }
        if(dp[i][buy][count]!=-1){
            return dp[i][buy][count];
        }
        int profit=0;
        if(buy){
            profit=max((-prices[i]+find(i+1,0,count,dp,prices,n)),(find(i+1,1,count,dp,prices,n)));
        }
        else{
            profit=max((prices[i]+find(i+1,1,count-1,dp,prices,n)),find(i+1,0,count,dp,prices,n));
        }
        return dp[i][buy][count]=profit;

    }
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        return find(0,1,2,dp,prices,n);
    }
};