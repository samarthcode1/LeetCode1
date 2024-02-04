class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long n = nums.size();
        unordered_map<int ,vector<int>> mp;
        vector<long long>v(nums.size());
        v[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            v[i]=v[i-1]+nums[i];
        }
        long long maxSum=LONG_MIN;
        bool check=false;
        long long ans;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i]-k)!=mp.end()){
                check=true;
                for(auto x : mp[nums[i]-k]){
                    if(x==0){
                        ans=v[i];
                    }
                    else{
                        ans=v[i]-v[x-1];
                    }
                    maxSum=max(maxSum,ans);
                }
            }
            if(mp.find(nums[i]+k)!=mp.end()){
                check=true;
                for(auto x:mp[nums[i]+k]){
                    if(x==0){
                        ans=v[i];
                    }
                    else{
                        ans=v[i]-v[x-1];
                    }
                    maxSum=max(maxSum,ans);
                }
            }
            mp[nums[i]].push_back(i);
        }
        if(check){
            return maxSum;
        }
        else{
            return 0;
        }
        // return check ? maxSum :0;
    }
};