class Solution {
public:
    void combinesum(vector<int>& candidate,int target,vector<int>& v,int sum,int i,int n, vector<vector<int>> &ans){
        if(i==n){
            if(sum == target){
                ans.push_back(v); 
            }
            return;
        }
        if((sum+candidate[i])<=target){
            sum+=candidate[i];
            v.push_back(candidate[i]);
            combinesum(candidate,target,v,sum,i,n,ans);
            sum-=candidate[i];
            // v.pop_back(candidate[i]);
            v.pop_back();
        }
        combinesum(candidate,target,v,sum,i+1,n,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>result;
        vector<int>v;
        combinesum(candidates,target,v,0,0,n,result);
        // result.push_back(v);
        return result;
    }
};