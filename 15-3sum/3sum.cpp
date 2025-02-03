class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>v;
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            int j=i+1,k=n-1;
            while(j<k)
            {
                int val=nums[i]+nums[j]+nums[k];
                if(val==0){
                    st.insert({nums[i],nums[j],nums[k]});
                    j++,k--;
                }
                else if(val<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        for(auto i:st){
            v.push_back(i);
        }
        return v;
    }
};