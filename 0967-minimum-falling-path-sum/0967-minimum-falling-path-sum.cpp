class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        vector<vector<int>> dp(m, vector<int>(n, 0));
        
        for (int j = 0; j < n; j++) {
            dp[0][j] = matrix[0][j];
        }
        
        for (int i = 1; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int up = dp[i - 1][j];
                int leftdia = (j > 0) ? dp[i - 1][j - 1] : INT_MAX;
                int rightdia = (j < n - 1) ? dp[i - 1][j + 1] : INT_MAX;
                
                dp[i][j] = matrix[i][j] + min(up, min(leftdia, rightdia));
            }
        }
        
        int mini = INT_MAX;
        for (int j = 0; j < n; j++) {
            mini = min(mini, dp[m - 1][j]);
        }
        
        return mini;
    }
};
