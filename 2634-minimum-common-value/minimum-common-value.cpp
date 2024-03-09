class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        unordered_set<int>s1,s2;
        for(auto i:nums1){
            s1.insert(i);
        }
        for(auto i:nums2){
            s2.insert(i);
        }
        for(auto i:s1){
            mp[i]++;
        }
        for(auto i:s2){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second>1){
                return i.first;
            }
        }
        return -1;
    }
};