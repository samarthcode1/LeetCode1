class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int i;
        int idx = 0;
        for (i = 0; i < n; i++) {
            if (nums[i] == 0) {
                k--;
            }
            if (k < 0) {
                if(nums[idx]==0){
                    k++;
                }
                idx++;
            }
        }
        return i-idx;
    }
};