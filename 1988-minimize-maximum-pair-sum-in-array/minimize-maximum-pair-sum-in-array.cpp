class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int maxi=INT_MIN;
        int i=0,j=n-1;
        while(i<j){
            maxi=max(maxi,nums[i]+nums[j]);
            i++,j--;
        }
        return maxi;
    }
};