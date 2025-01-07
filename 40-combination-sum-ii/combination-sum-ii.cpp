class Solution {
public:
    void check(vector<int>& candidates, int target, int n,vector<vector<int>>& ans, vector<int>& v, int idx, int sum) {
        if(sum==target){
            ans.push_back(v);
            return;
        }
        if(sum>target || idx==n){
            return;
        }
        for(int i=idx;i<candidates.size();i++){
            if(sum+candidates[i]>target){
                break;
            }
            else if(i>idx && candidates[i-1]==candidates[i]){
                continue;
            }
            else{
                sum+=candidates[i];
                v.push_back(candidates[i]);
                check(candidates,target,n,ans,v,i+1,sum);
                sum-=candidates[i];
                v.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        int n = candidates.size();
        vector<vector<int>> ans;
        vector<int> v;
        check(candidates, target, n, ans, v, 0, 0);
        return ans;
    }
};