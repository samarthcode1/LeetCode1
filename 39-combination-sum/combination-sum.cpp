class Solution {
public:
    void check(int idx, int sum, int n, vector<vector<int>>& res,
               vector<int>& v, vector<int>& candidates, int target) {
        if (idx == n) {
            if (sum == target) {
                res.push_back(v);
            }
            return;
        }
        if (sum + candidates[idx] <= target) {
            sum += candidates[idx];
            v.push_back(candidates[idx]);
            check(idx, sum, n, res, v, candidates, target);
            sum -= candidates[idx];
            v.pop_back();
        }
        check(idx + 1, sum, n, res, v, candidates, target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> v;
        int n = candidates.size();
        check(0, 0, n, res, v, candidates, target);
        return res;
    }
};