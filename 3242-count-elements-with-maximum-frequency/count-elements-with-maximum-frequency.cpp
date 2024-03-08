class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        int maxi=0;
        for(auto i:mp){
            maxi=max(maxi,i.second);
        }

        int count=0;
        for(auto i:mp){
            if(i.second==maxi){
                count++;
            }
        }
        return count*maxi;
    }
};