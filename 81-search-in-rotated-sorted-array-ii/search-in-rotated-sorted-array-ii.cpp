class Solution {
public:
    bool search(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==target){
        //         return true;
        //     }
        // }
        // return false;
        int low=0;
        int high=nums.size()-1;
        // int mid=(low+high)/2;

        while(low<=high){
            int mid=(low+high)/2;
            if(target==nums[mid]){
                return true;
            }
            if (nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low = low + 1;
                high = high - 1;
                continue;
            }
            if(nums[low]<=nums[mid]){
                if(nums[low]<=target && nums[mid]>=target){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(nums[high]>=target && nums[mid]<=target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return false;
    }
};