class Solution {
public:
    int find(int i,vector<int>& dp,vector<int>& arr,int k){
        int n=arr.size();
        if(i==n){
            return 0;
        }
        int maxi=INT_MIN;
        int len=0;
        int sum=INT_MIN;
        if(dp[i]!=-1){
            return dp[i];
        }
        for(int j=i;j<min(n,i+k);j++){
            len++;
            maxi=max(maxi,arr[j]);
            int val=(maxi*len)+find(j+1,dp,arr,k);
            sum=max(sum,val);
        }
        return dp[i]=sum;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>dp(n,-1);
        return find(0,dp,arr,k);
    }
};