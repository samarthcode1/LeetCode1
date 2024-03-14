class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int count=0;
        int sum=0;
        int front=0;
        int zero=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(front<i && (sum>goal || nums[front]==0)){
                if(nums[front]==1){
                    zero=0;
                }
                else{
                    zero++;
                }
                sum-=nums[front];
                front++;
            }
            if(sum==goal){
                count+=1+zero;
            }
        }
        return count;
    }
};