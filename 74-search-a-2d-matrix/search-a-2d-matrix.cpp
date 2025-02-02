class Solution {
public:
    bool search(int target, vector<int> matrix) {
        int low = 0;
        int n = matrix.size();
        int high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (matrix[mid] == target) {
                return true;
            } else if (matrix[mid] < target) {
                low=mid+1;
            } else {
                high=mid-1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        for (int i = 0; i < n; i++) {
            if (matrix[i][0] <= target && target <= matrix[i][m - 1]) {
                return search(target,matrix[i]);
            }
        }
        return false;
    }
};