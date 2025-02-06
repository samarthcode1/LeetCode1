class Solution {
public:
    void check(int idx,int sum,int n,vector<int>& v,vector<vector<int>>& ans,vector<int>& candidates,int target){
        if(idx==n){
            if(sum==target){
                ans.push_back(v);
            }
            return;
        }
        if(sum+candidates[idx]<=target){
            sum+=candidates[idx];
            v.push_back(candidates[idx]);
            check(idx,sum,n,v,ans,candidates,target);
            sum-=candidates[idx];
            v.pop_back();
        }
        check(idx+1,sum,n,v,ans,candidates,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        int n=candidates.size();
        check(0,0,n,v,ans,candidates,target);
        return ans;
    }
};