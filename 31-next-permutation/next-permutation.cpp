class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // int maxi=*max_element(nums.begin(),nums.end());
        // int low=0,high=nums.size()-1;
        int ind=-1;
        int n=nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                ind=i-1;
                break;
            }
        }
        if(ind==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ind+1,nums.end());
        
    }
};