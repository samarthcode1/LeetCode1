class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int res=INT_MAX;
        int n=matrix.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return matrix[0][0];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int m=matrix[i-1][j];
                if(j-1>=0){
                    m=min(m,matrix[i-1][j-1]);
                }
                if(j+1<n){
                    m=min(m,matrix[i-1][j+1]);
                }
                matrix[i][j]+=m;
                if(i==n-1){
                    res=min(res,matrix[i][j]);
                }
            }
        }
        return res;

    }
};