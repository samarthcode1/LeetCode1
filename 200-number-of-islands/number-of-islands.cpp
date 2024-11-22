class Solution {
public:
    bool check(vector<vector<char>>& grid, vector<vector<bool>>& visi, int r,
               int c) {
        int row = grid.size();
        int col = grid[0].size();

        return (r >= 0) && (r < row) && (c >= 0) && (c < col) &&
               (grid[r][c] == '1') && (!visi[r][c]);
    }
    void dfs(vector<vector<char>>& grid, vector<vector<bool>>& visi, int r,
             int c) {
        vector<int> X = {-1, 0,0,1};
        vector<int> Y = {0, 1,-1,0};
        visi[r][c] = true;

        for (int i = 0; i < 4; i++) {
            int nX = r + X[i];
            int nY = c + Y[i];
            if (check(grid, visi, nX, nY)) {
                dfs(grid, visi, nX, nY);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        vector<vector<bool>> visi(r, vector<bool>(c, false));
        int count = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == '1' && !visi[i][j]) {
                    dfs(grid, visi, i, j);
                    count++;
                }
            }
        }
        return count;
    }
};