class Solution {
public:
    vector<vector<int>>memo;
    int dp(int i,int j,vector<int>& nums1, vector<int>& nums2){
        if(i==nums1.size() || j==nums2.size()){
            return 0;
        }
        if(memo[i][j]!=0){
            return memo[i][j];
        }
        int res=nums1[i]*nums2[j]+dp(i+1,j+1,nums1,nums2);
        memo[i][j]=max(res,max(dp(i+1,j,nums1,nums2),dp(i,j+1,nums1,nums2)));
        return memo[i][j];
    }
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int fmax=INT_MIN,smax=INT_MIN,fmin=INT_MAX,smin=INT_MAX;
        for(auto i:nums1){
            fmax=max(fmax,i);
            fmin=min(fmin,i);
        }
        for(auto i:nums2){
            smax=max(smax,i);
            smin=min(smin,i);
        }
        if(fmax<0 && smin>0){
            return fmax*smin;
        }
        if(fmin>0 && smax<0){
            return fmin*smax;
        }
        memo=vector(nums1.size(),vector(nums2.size(),0));
        return dp(0,0,nums1,nums2);      

    }
};