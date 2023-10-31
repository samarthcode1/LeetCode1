class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>>st;
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int c=j+1,d=n-1;
                while(c<d){
                    long long sum =(long long )nums[i]+(long long)nums[j]+(long long)nums[c]+(long long)nums[d];
                    long long targ=target;
                    if(sum==targ){
                        st.insert({nums[i],nums[j],nums[c],nums[d]});
                        c++,d--;
                    }
                    else if(sum<targ){
                        c++;
                    }
                    else{
                        d--;
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