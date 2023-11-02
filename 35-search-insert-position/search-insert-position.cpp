class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int length=nums.size();
        for(int i=0;i<nums.size();i++){
            if(target==nums[i]){
                return i;
            }
            else if(target<nums[i]){
                return i;
            }
            
        }
        return length;
    }
};