class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                continue;
            }
            else if(nums[i]<nums[i-1]){
                count++;
            }
        }
        if(nums[nums.size()-1]>nums[0]){
            count++;
        }
        cout<<count;
        if(count>1){
            return false;
        }
        return true;
    }
};