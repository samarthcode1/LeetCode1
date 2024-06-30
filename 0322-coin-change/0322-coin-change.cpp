class Solution {
public:
    int cal(int idx, int k, vector<vector<int>>& dp, vector<int>& coins) {
        if (idx == 0) {
            if (k % coins[0] == 0) {
                return k / coins[0];
            } else {
                return 1e9;
            }
        }
        if (dp[idx][k] != -1)
            return dp[idx][k];

        int nott = cal(idx - 1, k, dp, coins);
        int take = 1e9;
        if (coins[idx] <= k) {
            take = 1 + cal(idx, k - coins[idx], dp, coins);
        }
        return dp[idx][k] = min(nott, take);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n, vector<int>(amount+1, -1));
        int res=cal(n - 1, amount, dp, coins);
        if(res>=1e9){
            return -1;
        }
        return res; 
    }
};