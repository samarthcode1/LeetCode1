class Solution {
public: 
    int find(int i,int j,int m,int n,vector<vector<int>>& dp){
        if(i==m-1 && j==n-1){
            return 1;
        }
        if(i>=m || j>=n){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        dp[i][j]=find(i+1,j,m,n,dp)+find(i,j+1,m,n,dp);
        return dp[i][j];
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return find(0,0,m,n,dp);
    }
};