class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int r, int c, int rStart, int cStart) {
        vector<vector<int>> v;
        vector<vector<int>> dir = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int count = 0;
        int idx = 0;
        int x = rStart;
        int y = cStart;
        int length = r * c;
        v.push_back({x, y});
        while (v.size() < length) {
            if (idx % 2 == 0) {
                count++;
            }
            for (int i = 0; i < count; i++) {
                x += dir[idx][0];
                y += dir[idx][1];
                if (x >= 0 && x < r && y >= 0 && y < c) {
                    v.push_back({x, y});
                }
            }

            idx = (idx + 1) % 4;
        }
        return v;
    }
};