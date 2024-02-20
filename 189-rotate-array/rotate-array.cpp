class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        // if(k>nums.size()){
        //     k=0;
        // }
        reverse(nums.begin(),nums.begin()+(nums.size()-k));
        reverse(nums.begin()+(nums.size()-k),nums.end());
        reverse(nums.begin(),nums.end());
    }
};