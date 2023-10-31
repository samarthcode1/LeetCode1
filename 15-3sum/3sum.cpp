class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Approach-1(n^3logn)

        // vector<vector<int>>t;
        // set<vector<int>>st;
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         for(int k=j+1;k<nums.size();k++){
        //             if(nums[i]+nums[j]+nums[k]==0){
        //                 st.insert({nums[i],nums[j],nums[k]});
        //             }
        //         }
        //     }
        // }
        // for(auto i:st){
        //     t.push_back(i);
        // }
        // return t;

        vector<vector<int>>t;
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    st.insert({nums[i],nums[j],nums[k]});
                    j++,k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        for(auto i:st){
            t.push_back(i);
        }
        return t;
        
    }
};