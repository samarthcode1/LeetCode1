class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>v;
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int k=j+1;
                int l=nums.size()-1;
                while(k<l){
                    long long sum =(long long )nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l];
                    long long targ=target;
                    if(sum==targ){
                        st.insert({nums[i],nums[j],nums[k],nums[l]});
                        k++;l--;
                    }
                    else if(sum<targ){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
 
        }
        for(auto i:st){
            v.push_back(i);
        }
        return v;

    }
};