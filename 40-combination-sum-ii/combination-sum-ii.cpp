class Solution {
public:
    void check(int idx,vector<vector<int>>& ans,vector<int>& v,int n,vector<int>& candidates,int target){
        if(target==0){
            ans.push_back(v);
            return;
        }
        for(int i=idx;i<n;i++){
            if(i>idx && candidates[i]==candidates[i-1]){
                continue;
            }
            if(candidates[i]>target){
                break;
            }
            v.push_back(candidates[i]);
            check(i+1,ans,v,n,candidates,target-candidates[i]);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        sort(candidates.begin(),candidates.end());
        int n=candidates.size();
        check(0,ans,v,n,candidates,target);
        return ans;
    }
};