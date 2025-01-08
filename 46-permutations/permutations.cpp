class Solution {
public:
    void combination(int index,int size,vector<vector<int>>& v,vector<int>& nums){
        if(index==size){
            v.push_back(nums);
            return;
        }
        for(int j=index;j<size;j++){
            swap(nums[index],nums[j]);
            combination(index+1,size,v,nums);
            swap(nums[index],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>v;
        int size=nums.size();
        combination(0,size,v,nums);
        return v;
    }
};