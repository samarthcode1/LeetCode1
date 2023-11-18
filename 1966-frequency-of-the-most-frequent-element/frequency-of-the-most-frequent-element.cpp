class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left=0;
        long sum=0;
        for(int i=0;i<nums.size();i++){
            long target=nums[i];
            sum+=target;
            if((i-left+1)*target-sum>k){
                sum-=nums[left];
                left++;
            }
        }
        return nums.size()-left;
    }
};