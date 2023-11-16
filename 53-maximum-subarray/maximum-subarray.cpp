class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int maxi=INT_MIN;
        int i=0,j=0;
        while(i<n){
            sum+=nums[i];
            maxi=max(maxi,sum);
            while(sum<0){
                sum-=nums[j];
                j++;
            }
            i++;
        }
        return maxi;
    }
};