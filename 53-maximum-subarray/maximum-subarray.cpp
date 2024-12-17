class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int i=0,j=0;
        int maxi=INT_MIN;
        for(i=0;i<nums.size();i++){
            sum+=nums[i];
            maxi=max(maxi,sum);
            while(sum<0){
                sum-=nums[j];
                j++;
            }
        }
        return maxi;
    }
};