class Solution {
public:
    int check(vector<int>& cost, vector<int>& time, int idx, int rem,vector<vector<int>>& dp) {
        if (rem <= 0) {
            return 0;
        }
        if (idx >= cost.size()) {
            return 1e9;
        }
        if (dp[idx][rem] != -1) {
            return dp[idx][rem];
        } else {
            int take =cost[idx] + check(cost, time, idx + 1, rem - 1 - time[idx], dp);
            int notTake = check(cost, time, idx + 1, rem, dp);
            return dp[idx][rem]=min(take, notTake);
        }
    }
    int paintWalls(vector<int>& cost, vector<int>& time) {
        int n = time.size();
        vector<vector<int>> dp(n+1, vector<int>(n + 1, -1));
        return check(cost, time, 0, n, dp);
    }
};