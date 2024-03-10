class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s2;
        // map<int,int>s2;
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        // for(auto i:nums1){
        //     // s1.insert(i);
        //     s1[nums1[i]]++;
        // }
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n2;i++){
            // s2.insert(i);
            // s2[nums2[i]]++;
            s2.insert(nums2[i]);
        }
        
        set<int>s;
        // if(n1>n2){
        for(int i=0;i<n1;i++){
           if(s2.find(nums1[i])!=s2.end()){
               s.insert(nums1[i]);
           }
        }
        // }
        // else{
        //     for(int i=0;i<n2;i++){
        //         if(s1.find(nums2[i])!=s1.end()){
        //             s.insert(nums2[i]);
        //         }
        //     }
        // }
        vector<int>v;
        for(auto i:s){
            v.push_back(i);
        }
        return v;
        
    }
};