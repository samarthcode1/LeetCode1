class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int maxi=0,ans=0;
        int j=0;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,++mp[nums[i]]);
            while(i-j-maxi+1>k){
                --mp[nums[j]];
                j++;
            }
            ans=max(ans,maxi);
        }
        return ans;
    }
};