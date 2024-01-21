class Solution {
public:
int dp[100];
    int func(vector<int>& nums,int n){
        if(n<0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        return dp[n]=max(nums[n]+func(nums,n-2),func(nums,n-1));
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        return func(nums,n-1);
        // vector<int>v1,v2;
        // for(int i=0;i<n;i+=2){
        //     v1.push_back(nums[i]);
        // }
        // for(int i=1;i<n;i+=2){
        //     v2.push_back(nums[i]);
        // }
        // int sum1=0,sum2=0;
        // for(auto i:v1){
        //     sum1+=i;
        // }
        // for(auto i:v2){
        //     sum2+=i;
        // }
        // return max(sum1,sum2);
    }
};