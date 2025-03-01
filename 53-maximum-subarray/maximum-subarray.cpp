class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int n=nums.size();
        int sum=0;
        int j=0;
        for(int i=0;i<n;i++)
        {
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