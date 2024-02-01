class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<vector<int>>v;
        if(n%3!=0){
            return v;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i+=3){
            vector<int>v1={nums[i],nums[i+1],nums[i+2]};
            if(abs(v1[0]-v1[1])<=k && abs(v1[1]-v1[2])<=k && abs(v1[0]-v1[2])<=k){
                v.push_back(v1);
            }
            else{
                return {};
            }
        }
        return v;
    }
};