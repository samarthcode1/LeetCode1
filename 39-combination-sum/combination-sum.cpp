class Solution {
public:
    void find(int idx, int sum, vector<vector<int>>& res, vector<int>& v, int n,
              vector<int>& candidates, int target) {
        if (idx == n) {
            if (sum == target) {
                res.push_back(v);
            }
            return;
        }

        if (sum + candidates[idx] <= target) {
            v.push_back(candidates[idx]);
            find(idx, sum + candidates[idx], res, v, n, candidates, target);
            v.pop_back();
        }
        find(idx + 1, sum, res, v, n, candidates, target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector < vector<int>> res;
        vector<int> v;
        int n = candidates.size();
        find(0, 0, res, v, n, candidates, target);
        return res;
    }
};