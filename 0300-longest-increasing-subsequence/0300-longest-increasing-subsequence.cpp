class Solution {
public:
    int find(int i,int prev,vector<int>& nums,vector<vector<int>>& dp,int n){
        if(i==n){
            return 0;
        }
        if(dp[i][prev+1]!=-1){
            return dp[i][prev+1];
        }
        int nott=0+find(i+1,prev,nums,dp,n);
        int take=0;
        if(prev==-1 || nums[i]>nums[prev]){
            take=1+find(i+1,i,nums,dp,n);
        }
        return dp[i][prev+1]=max(take,nott);

    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return find(0,-1,nums,dp,n);
    }
};