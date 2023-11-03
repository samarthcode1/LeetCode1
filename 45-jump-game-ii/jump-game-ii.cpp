class Solution {
public:
    int jump(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            nums[i]=max(nums[i]+i,nums[i-1]);
        }

        int i=0;
        int count=0;
        int temp=0;
        int n=nums.size();
        while(i<n-1){
            count++;
            i=nums[i];    
        }
        return count;
    }
};