class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<int>onerow(r,0);
        vector<int>onecol(c,0);
        vector<vector<int>>diff(r,vector<int>(c,0));
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                onerow[i] += grid[i][j];
                onecol[j] += grid[i][j];
            }
        }
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                diff[i][j]=2*onerow[i]+2*onecol[j]-r-c;
            }
        }
        return diff;
    }
};