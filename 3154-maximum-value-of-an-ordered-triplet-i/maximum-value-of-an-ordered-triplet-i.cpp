class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        vector<int>leftPref(n),rightPref(n);
        for(int i=1;i<n;i++){
            leftPref[i]=max(leftPref[i-1],nums[i-1]);
            rightPref[n-i-1]=max(rightPref[n-i],nums[n-i]);
        }
        long long val=0;
        for(int j=1;j<n-1;j++){
            val=max(val,(long long)(leftPref[j]-nums[j])*rightPref[j]);
        }
        return val;
    }
};