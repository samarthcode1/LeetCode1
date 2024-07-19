class Solution {
public:
    int check(int idx, vector<int>& dp, vector<int>& nums) {
        int n=nums.size();
        if(idx==n-1){
            return true;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        int jump=min(n-1,idx+nums[idx]);
        for(int i=idx+1;i<=jump;i++){
            // if(nums[i]==0){
            //     return false;
            // }
            if(check(i,dp,nums)){
                return true;
            }
        }
        return dp[idx]=false;
    }
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n, -1);
        return check(0, dp, nums);
    }
};