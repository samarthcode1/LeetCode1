class Solution {
public:
void combination(int index,int size,vector<vector<int>>& v,vector<int>& nums){
        if(index>=size){
            v.push_back(nums);
            return;
        }
        for(int j=index;j<size;j++){
            swap(nums[index],nums[j]);
            combination(index+1,size,v,nums);
            swap(nums[index],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>v;
        set<vector<int>> st;
        int size=nums.size();
        int index=0;
        combination(index,size,v,nums);
        for(auto i:v){
            st.insert(i);
        }
        v.clear();
        for(auto i:st){
            v.push_back(i);
        }
        return v;
    }
};