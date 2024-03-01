class Solution {
public:
    void combinesum(vector<int>& candidate,int target,vector<int>& v,int sum,int id,int n, vector<vector<int>> &ans){
        if(sum == target){
            ans.push_back(v);
            return;
        }

        if(sum>target || id==n){
            return;
        }
        
        for(int i=id;i<n;i++){
            if(sum+candidate[i]>target){
                break;
            }
            else if(i>id && candidate[i] == candidate[i-1]){
                continue;
            }
            else 
            {
                sum+=candidate[i];
                v.push_back(candidate[i]);
                combinesum(candidate,target,v,sum,i+1,n,ans);
                sum-=candidate[i];
                v.pop_back();
                // combinesum(candidate,target,v,sum,i+1,n,ans);
            }
        }
        // combinesum(candidate,target,v,sum,i+1,n,ans);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n=candidates.size();
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>result;
        vector<int>v;
        combinesum(candidates,target,v,0,0,n,result);
        return result;
    }
};