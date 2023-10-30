class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        //Approach-2
        return is_sorted(nums.begin(), nums.end()) || is_sorted(nums.rbegin(), nums.rend());

        
        //Approach-1
        // vector<int>v1,v2;
        // for(int i=0;i<nums.size();i++){
        //     v1.push_back(nums[i]);
        //     v2.push_back(nums[i]);
        // }
        // int maxi=*max_element(nums.begin(), nums.end());
        // int mini=*min_element(nums.begin(), nums.end());
        // sort(v1.begin(),v1.end());
        // sort(v2.begin(), v2.end(), greater<int>());

        // if(nums[0]==mini){
        //     for(int i=0;i<nums.size();i++){
        //         if(nums[i]!=v1[i]){
        //             return false;
        //         }
        //     }
        // }
        // else if(nums[0]==maxi){
        //     for(int i=0;i<nums.size();i++){
        //         if(nums[i]!=v2[i]){
        //             return false;
        //         }
        //     }
        // }
        // else{
        //     return false;
        // }
        // return true;
        
        // for(int i=0;i<nums.size()-2;i++){
        //     if(nums[i]<nums[i+1]){
        //         if(nums[i+1]>nums[i+2]){
        //             return false;
        //         }
        //     }
        //     else if(nums[i]==nums[i+1]){
        //         continue;
        //     }
        //     else{
        //         if(nums[i+1]<nums[i+2]){
        //             return false;
        //         }
        //     }
        // }
        // return true;
    }
};