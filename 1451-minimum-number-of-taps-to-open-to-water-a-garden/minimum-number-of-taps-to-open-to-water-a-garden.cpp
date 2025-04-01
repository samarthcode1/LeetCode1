class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<int> dp(n + 1, 1e9);  // Initialize DP array
        dp[0] = 0;  // No taps needed at the start

        for (int i = 0; i <= n; i++) {
            int left = max(0, i - ranges[i]);
            int right = min(n, i + ranges[i]);

            // Update DP for all positions between left and right
            for (int j = left; j <= right; j++) {
                dp[j] = min(dp[j], dp[left] + 1);
            }
        }

        return (dp[n] == 1e9) ? -1 : dp[n];
    }
};
