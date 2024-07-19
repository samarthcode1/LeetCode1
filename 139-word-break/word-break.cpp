class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        vector<bool> dp(n + 1, false);
        dp[n] = true;
        for (int i = s.size() - 1; i >= 0; i--) {
            for (auto str : wordDict) {
                if (i + str.size() <= s.size() && s.substr(i, str.size()) == str) {
                    dp[i] = dp[i + str.size()];
                }
                if (dp[i]) {
                    break;
                }
            }
        }

        return dp[0];
    }
};
