class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        vector<int>rowcount(r,0);
        vector<int>colcount(c,0);
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==1){
                    colcount[j]++;
                    rowcount[i]++;
                }
            }
        }
        int ans=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==1){
                    if(rowcount[i]==1 && colcount[j]==1){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};