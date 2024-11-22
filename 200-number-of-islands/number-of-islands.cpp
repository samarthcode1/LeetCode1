class Solution {
public:
    void bfs(vector<vector<char>>& grid, int& x, int& y) {
        int r = grid.size();
        int c = grid[0].size();
        queue<pair<int, int>> q;
        q.push({x, y});
        grid[x][y] = '.';
        vector<int> X = {-1, 0, 0, 1};
        vector<int> Y = {0, -1, 1, 0};
        while (!q.empty()) {
            pair p = q.front();
            q.pop();
            int i = p.first;
            int j = p.second;
            for (int k = 0; k < 4; k++) {
                int nx = X[k] + i;
                int ny = Y[k] + j;
                if (nx >= 0 && nx < r && ny >= 0 && ny < c &&
                    grid[nx][ny] == '1') {
                    q.push({nx, ny});
                    grid[nx][ny] = '.';
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int count = 0;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                if (grid[i][j] == '1') {
                    count++;
                    bfs(grid, i, j);
                }
            }
        }
        return count;
    }
};