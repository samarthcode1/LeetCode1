class Solution {
public:
    int dp[201][201];
    int check(vector<vector<int>>& grid,int x,int y,int n){
        if(x==n){
            return 0;
        }

        if(dp[x][y]!=-1){
            return dp[x][y];
        }

        int sum=INT_MAX;
        for(int i=0;i<n;i++){
            if(i==y){
                continue;
            }
            int a =check(grid,x+1,i,n)+grid[x][i];
            sum=min(sum,a);
        }
        return dp[x][y]=sum;
        
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        memset(dp,-1,sizeof(dp));
        int sum=INT_MAX;
        for(int i=0;i<n;i++){
            sum=min(sum,check(grid,1,i,n)+grid[0][i]);
        }
        return sum;
    }
};