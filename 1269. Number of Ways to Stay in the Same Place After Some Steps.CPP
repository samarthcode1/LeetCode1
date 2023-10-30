class Solution {
public:
    int numWays(int steps, int arrLen) {
        arrLen=min(arrLen,steps);
        int mod=1e9+7;
        vector<vector<int>>dp(arrLen,vector(steps+1,0));
        dp[0][0]=1;
        for(int i=1;i<=steps;i++){
            for(int j=arrLen-1;j>=0;j--){
                int arr=dp[j][i-1];
                if(j>0){
                    arr=(arr+dp[j-1][i-1])%mod;
                }
                if(j<arrLen-1){
                    arr=(arr+dp[j+1][i-1])%mod;
                }
                dp[j][i]=arr;
            }
        }
        return dp[0][steps];
    }
};