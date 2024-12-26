class Solution {
public:
    int find(int idx, int target, vector<vector<int>>& dp, vector<int>& nums) {

        if (idx == 0) {
            if (target == 0 && nums[idx] == 0) {
                return 2;
            }
            if (target == 0 || nums[idx] == target) {
                return 1;
            }
            return 0;
        }
        if (dp[idx][target] != -1) {
            return dp[idx][target];
        }
        int nott = find(idx - 1, target, dp, nums);
        int take = 0;
        if (nums[idx] <= target) {
            take = find(idx - 1, target - nums[idx], dp, nums);
        }
        return dp[idx][target] = nott + take;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        int totSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            totSum += nums[i];
        }
        if (totSum - target < 0)
            return 0; 
        if ((totSum - target) % 2 == 1)
            return 0; 
        int s2 = (totSum - target) / 2;
        vector<vector<int>> dp(n, vector<int>(s2 + 1, -1));
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<s2+1;j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return find(n - 1, s2, dp, nums);
    }
};