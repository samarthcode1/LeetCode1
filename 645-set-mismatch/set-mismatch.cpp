class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>v;
        // sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second>1){
                v.push_back(i.first);
                break;
            }
        }
        set<int>st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        set<int>::iterator itr;
        itr=st.begin();
        for(int i=0;i<n;i++){
            if(*itr!=i+1){
                v.push_back(i+1);
                break;
            }
            itr++;
        }
        return v;
    }
};