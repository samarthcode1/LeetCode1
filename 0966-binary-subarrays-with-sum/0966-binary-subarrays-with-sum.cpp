class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int sum=0;
        int zero=0;
        int left=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(left<i && (sum>goal || nums[left]==0)){
                if(nums[left]==1){
                    zero=0;
                }
                else{
                    zero++;
                }
                sum-=nums[left];
                left++;
            }
            if(sum==goal){
                count+=1+zero;
            }
        }
        return count;
    }
};