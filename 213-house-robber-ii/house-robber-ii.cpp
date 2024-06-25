class Solution {
public:
// int dp[100];
    int helper(vector<int>& nums){
        int n=nums.size();
        int prev2=0;
        int prev1=nums[0];
        for(int i=1;i<n;i++){
            int incl=prev2+nums[i];
            int excl=prev1;
            int ans=max(incl,excl);
            prev2=prev1;
            prev1=ans;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        // memset(dp,-1,sizeof(dp));
        if(n==1){
            return nums[0];
        }
        vector<int>v1,v2;
        for(int i=0;i<n;i++){
            if(i!=n-1){
                v1.push_back(nums[i]);
            }
            if(i!=0){
                v2.push_back(nums[i]);
            }
        }
        return max(helper(v1),helper(v2));

    }
};