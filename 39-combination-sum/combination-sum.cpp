class Solution {
public:
    void combi(vector<int>& candidates, vector<vector<int>>& combina,vector<int>& v,int sum,int ind,int n, int target){
        if(ind==n){
            if(target==sum){
                combina.push_back(v);
            }
            return;
        }
        if(sum+candidates[ind]<=target){
            sum+=candidates[ind];
            v.push_back(candidates[ind]);
            combi(candidates,combina,v,sum,ind,n,target);
            sum-=candidates[ind];
            v.pop_back();
        }
        combi(candidates,combina,v,sum,ind+1,n,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>combina;
        vector<int>v;
        combi(candidates,combina,v,0,0,n,target);
        return combina;
    }
};