class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(),n2=nums2.size();
        int p1=0,p2=0;
        while(p1<n1 && p2<n2){
            if(nums1[p1]==nums2[p2]){
                return nums1[p1];
            }
            else if(nums1[p1]<nums2[p2]){
                p1++;
            }
            else{
                p2++;
            }
        }
        return -1;
        // map<int,int>mp;
        // unordered_set<int>s1,s2;
        // for(auto i:nums1){
        //     s1.insert(i);
        // }
        // for(auto i:nums2){
        //     s2.insert(i);
        // }
        // for(auto i:s1){
        //     mp[i]++;
        // }
        // for(auto i:s2){
        //     mp[i]++;
        // }
        // for(auto i:mp){
        //     if(i.second>1){
        //         return i.first;
        //     }
        // }
        // return -1;
    }
};