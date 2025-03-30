class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        if(arr[start]==-1){
            return false;
        }
        if(arr[start]==0){
            return true;
        }
        int left=start-arr[start],right=start+arr[start];
        arr[start]=-1;
        return right=(right<arr.size() && canReach(arr,right)) || (left>=0 && canReach(arr,left));
    }
};