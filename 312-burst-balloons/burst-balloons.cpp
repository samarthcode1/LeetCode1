class Solution {
public:
    int find(int i,int j,vector<int>& v,vector<vector<int>>& dp){
        if(i>j){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int maxi=INT_MIN;
        for(int k=i;k<=j;k++){
            int coin=v[i-1]*v[k]*v[j+1];
            int left=find(i,k-1,v,dp)+find(k+1,j,v,dp);
            maxi=max(maxi,left+coin);
        }
        return dp[i][j]=maxi;

    }
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        vector<vector<int>>dp(n+2,vector<int>(n+2,-1));
        return find(1,n,nums,dp);
    }
};