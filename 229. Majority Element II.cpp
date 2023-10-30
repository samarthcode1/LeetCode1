class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int temp=floor(nums.size()/3);
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        vector<int>v;
        for(auto i:mp){
            if(i.second>temp){
                v.push_back(i.first);
            }
        }
        return v;
    }
};