class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int length=nums.size();
        // for(int i=0;i<nums.size();i++){
        //     if(target==nums[i]){
        //         return i;
        //     }
        //     else if(target<nums[i]){
        //         return i;
        //     }
            
        // }
        // return length;
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
    }
};