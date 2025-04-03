class Solution {
public:
    int numWays(vector<string>& words, string target) {
        const int mod = 1e9 + 7;
        int m = words[0].size(), n = target.size();
        vector<vector<int>> cnt(m, vector<int>(26, 0));

        // Count occurrences of each character at each column
        for (string& word : words) {
            for (int i = 0; i < m; i++) {
                cnt[i][word[i] - 'a']++;
            }
        }

        // DP Memoization
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

        function<int(int, int)> dfs = [&](int i, int k) -> int {
            if (i == n) return 1;
            if (k == m) return 0;
            if (dp[i][k] != -1) return dp[i][k];

            long long res = dfs(i, k + 1); // Skip position k
            if (cnt[k][target[i] - 'a'] > 0) {
                res += (long long)cnt[k][target[i] - 'a'] * dfs(i + 1, k + 1);
                res %= mod;
            }
            return dp[i][k] = res;
        };

        return dfs(0, 0);
    }
};
