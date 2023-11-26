class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m=matrix[0].size();
        int n=matrix.size();
        int area=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]!=0 && i>0){
                    matrix[i][j]+=matrix[i-1][j];
                }
            }
            vector<int>row=matrix[i];
            sort(row.begin(),row.end(),greater());
            for(int i=0;i<m;i++){
                area=max(area,row[i]*(i+1));
            }
        }
        return area;
    }
};