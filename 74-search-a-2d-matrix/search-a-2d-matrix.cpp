class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int low=0;
        int high=m*n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int val=matrix[mid/n][mid%n];
            if(target==val){
                return true;
            }
            else if(val<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
};