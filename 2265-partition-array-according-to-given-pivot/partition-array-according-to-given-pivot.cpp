class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>v(nums.size());
        int n=nums.size();
        int less=0,greater=n-1;
        for(int i=0,j=n-1;i<n;i++,j--){
            if(nums[i]<pivot){
                v[less]=nums[i];
                less++;
            }
            if(nums[j]>pivot){
                v[greater]=nums[j];
                greater--;
            }
        }
        while(less<=greater){
            v[less]=pivot;
            less++;
        }
        return v;

    }
};