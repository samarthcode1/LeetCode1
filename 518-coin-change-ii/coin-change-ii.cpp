class Solution {
public:
    int find(int idx,int k,vector<vector<int>>& dp,vector<int>& coins){
        if(idx==0){
            return (k%coins[0]==0);
        }
        if(dp[idx][k]!=-1){
            return dp[idx][k];
        }
        int nott=find(idx-1,k,dp,coins);
        int take=0;
        if(coins[idx]<=k){
            take=find(idx,k-coins[idx],dp,coins);
        }
        return dp[idx][k]=nott+take;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        return find(n-1,amount,dp,coins);
    }
};