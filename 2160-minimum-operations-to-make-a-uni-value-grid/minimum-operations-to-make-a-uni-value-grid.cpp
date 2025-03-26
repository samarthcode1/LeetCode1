class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> v;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                v.push_back(grid[i][j]);
            }
        }
        sort(v.begin(), v.end());
        
        int low = 0, high = v.size() - 1;
        int mid = (low + high) / 2;
        int count = 0;
        while (low < mid) {

            if (v[low] != v[mid]) {
                if ((v[mid] - v[low]) % x == 0) {
                    count += (v[mid] - v[low]) / x;
                }
                else{
                    return -1;
                }
            }
            low++;
        }
        while (high > mid) {
            if (v[high] != v[mid]) {
                if ((v[high] - v[mid]) % x == 0) {
                    count += (v[high] - v[mid]) / x;
                }
                else{
                    return -1;
                }
            }
            high--;
        }
        return count;
    }
};