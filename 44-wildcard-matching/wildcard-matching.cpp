class Solution {
public:
    bool check(int idx1, int idx2, vector<vector<int>>& dp, string& s,
               string& t) {
        if (idx1 < 0 && idx2 < 0)
            return true;
        if (idx1 < 0)
            return false;
        if (idx2 < 0) {
            for (int i = 0; i <= idx1; i++) {
                if (s[i] != '*')
                    return false;
            }
            return true;
        }
        if (dp[idx1][idx2] != -1)
            return dp[idx1][idx2];

        if (s[idx1] == t[idx2] || s[idx1] == '?') {
            return dp[idx1][idx2] = check(idx1 - 1, idx2 - 1, dp, s, t);
        } else if (s[idx1] == '*') {
            return dp[idx1][idx2] = check(idx1 - 1, idx2, dp, s, t) ||
                                    check(idx1, idx2 - 1, dp, s, t);
        } else {
            return dp[idx1][idx2] = false;
        }
    }

    bool isMatch(string s, string p) {
        int n = p.size();
        int m = s.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return check(n - 1, m - 1, dp, p, s);
    }
};
