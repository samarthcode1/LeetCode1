class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>>cord;
        int row=matrix.size();
        int col=matrix[0].size();

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    cord.push_back({i,j});
                }
            }
        }
        
        for(auto it:cord){
            int r=it.first;
            int c=it.second;
            for(int i=0;i<row;i++){
                matrix[i][c]=0;
            }
            for(int j=0;j<col;j++){
                matrix[r][j]=0;
            }
        }
    }
};