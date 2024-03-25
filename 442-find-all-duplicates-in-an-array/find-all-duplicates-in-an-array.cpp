class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // unordered_map<int,int>mp;
        // for(auto i:nums){
        //     mp[i]++;
        // }
        vector<int>v;
        // for(auto i:mp){
        //     if(i.second==2){
        //         v.push_back(i.first);
        //     }
        // }
        // return v;
        for(int i=0;i<nums.size();i++){
            int temp=abs(nums[i]);
            if(nums[temp-1]<0){
                v.push_back(temp);
            }
            nums[temp-1]*=-1;
        }

        return v;
    }
};