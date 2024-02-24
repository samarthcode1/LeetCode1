class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            if(mp.find(rem)!=mp.end()){
                v.push_back(mp[rem]);
                v.push_back(i); 
            }
            mp[nums[i]]=i;
        }
        if(v.size()==0){
            return {-1,-1};
        }
        return v;
    }
};