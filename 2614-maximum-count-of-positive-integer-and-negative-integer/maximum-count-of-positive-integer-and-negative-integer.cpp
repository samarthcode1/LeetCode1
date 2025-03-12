class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int count1=0,c2=0;
        int i=0,j=nums.size()-1;
        while(i<nums.size() && j>=0){
            if(nums[i]<0){
                count1++;
            }
            if(nums[j]>0){
                c2++;
            }
            i++,j--;
        }
        return max(count1,c2);

    }
};