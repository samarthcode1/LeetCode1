class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count=0;
        int front=0;
        int prod=1;
        if(prod>=k){
            return 0;
        }
        for(int i=0;i<nums.size();i++){
            prod*=nums[i];      
            while(prod>=k){
                prod=prod/nums[front];
                front++;
            }
            count+=i-front+1;
        }
        return count;
    }
};