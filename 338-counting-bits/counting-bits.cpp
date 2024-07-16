class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> res(n + 1, 0);
        for (int x = 1; x <= n; x++)
            res[x] = res[x / 2] + (x % 2);
        return res;
    }
};