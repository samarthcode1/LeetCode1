class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        // int o=0,z=0;
        // int maxi=0;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     if(nums[i]==0){
        //         z++;
        //     }
        //     else{
        //         o++;
        //     }
        //     if(z==o){
        //         maxi=max(maxi,);
        //     }
        // }
        // return maxi;
        int sum=0, maxLen=0;
        unordered_map<int, int> seen{{0, -1}};
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                sum += 1;
            }
            else{
                sum += -1;
            }
            if(seen.count(sum)) maxLen = max(maxLen, i-seen[sum]);
            else seen[sum] = i;
        }
        return maxLen;
    }
};