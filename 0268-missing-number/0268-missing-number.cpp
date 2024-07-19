class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size=nums.size();
        int sum=0;
        int final_sum=size*(size+1)/2;
        for(int i=0;i<size;i++){
            sum+=nums[i];
        }
        return final_sum-sum;
        // return a;
    }
};