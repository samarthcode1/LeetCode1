class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int low=0;
        int high=c-1;
        while(low<r&& high>=0){
            // int mid=(low+high)/2;
            int val=matrix[low][high];
            if(val==target){
                return true;
            }
            else if(val<target){
                low++;
            }
            else{
                high--;
            }
        }
        return false;
    }
};