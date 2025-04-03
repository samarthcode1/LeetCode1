const int MOD = 1e9 + 7;

class Solution {
public:
    vector<vector<int>> memo;
    vector<vector<int>> freq;

    int numWays(vector<string>& words, string target) {
        int m = words.size(), n = words[0].size(), t = target.size();
        
        freq.assign(n, vector<int>(26, 0));
        
        for (const string& word : words) {
            for (int col = 0; col < n; ++col) {
                freq[col][word[col] - 'a']++;
            }
        }

        memo.assign(t + 1, vector<int>(n + 1, -1));

        return dfs(target, 0, 0, n);
    }

    int dfs(const string& target, int i, int j, int n) {
        if (i == target.length()) return 1;  
        if (j == n) return 0;  
        if (memo[i][j] != -1) return memo[i][j];  
        long long ways = dfs(target, i, j + 1, n);

        char ch = target[i];
        if (freq[j][ch - 'a'] > 0) {
            ways = (ways + (long long)freq[j][ch - 'a'] * dfs(target, i + 1, j + 1, n)) % MOD;
        }

        return memo[i][j] = ways;
    }
};