class Solution {
public:
    int find(int i,int j,vector<vector<int>>& triangle,vector<vector<int>>& dp,int n){
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        // if(i==0 && j==0){
        //     return triangle[i][j];
        // }
        if(i==n-1){
            return triangle[i][j];
        }
        int lower=triangle[i][j]+find(i+1,j,triangle,dp,n);
        int diag=triangle[i][j]+find(i+1,j+1,triangle,dp,n);
        return dp[i][j]=min(lower,diag);


    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        int n=triangle[m-1].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return find(0,0,triangle,dp,n);
    }
};