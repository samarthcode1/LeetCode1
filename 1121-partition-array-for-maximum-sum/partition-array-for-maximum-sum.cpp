class Solution {
public:
    int dp[501];
    int recurr(vector<int>& arr, int k,int i,int n){
        if(i>=n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int maxVal=0;
        int maxi=0;
        // int len=0;

        for(int j=i;j<min(n,i+k);j++){
            // len++;
            maxVal=max(maxVal,arr[j]);
            maxi=max(maxi,(j-i+1)*maxVal+recurr(arr,k,j+1,n));
        }
        // dp[i]=maxi;
        // return dp[i];
        return dp[i]=maxi;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        memset(dp,-1,sizeof(dp));
        int n=arr.size();
        return recurr(arr,k,0,n);
    }
};