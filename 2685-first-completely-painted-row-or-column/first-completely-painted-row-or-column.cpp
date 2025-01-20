class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]=i;
        }
        int res=INT_MAX;
        int r=mat.size();
        int c=mat[0].size();
        for(int i=0;i<r;i++){
            int last=INT_MIN;
            for(int j=0;j<c;j++){
                int val=mp[mat[i][j]];
                last=max(last,val);
            }
            res=min(res,last);
        }
        for(int j=0;j<c;j++){
            int last=INT_MIN;
            for(int i=0;i<r;i++){
                int val=mp[mat[i][j]];
                last=max(last,val);
            }
            res=min(res,last);
        }
        return res;
    }
};