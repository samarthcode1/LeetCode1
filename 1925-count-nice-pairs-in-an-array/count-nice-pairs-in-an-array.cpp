class Solution {
public:
    int mod=1000000007;
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        return rev;
    }
    int countNicePairs(vector<int>& nums) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            arr.push_back(nums[i]-reverse(nums[i]));
        }
        unordered_map<int,int>mp;
        int ans=0;
        for(auto i:arr){
            ans=(ans+mp[i])%mod;
            mp[i]++;
        }
        return ans;
    }
};