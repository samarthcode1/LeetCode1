class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        unordered_map<int,int>mp1,mp2;
        int n=nums.size();
        for(auto i:nums){
            mp2[i]++;
        }
        for(int i=0;i<nums.size();i++){
            mp2[nums[i]]--;
            mp1[nums[i]]++;
            if((mp1[nums[i]]*2>i+1) && (mp2[nums[i]]*2>n-i-1)){
                return i;
            }
        }
        return -1;
    }
};