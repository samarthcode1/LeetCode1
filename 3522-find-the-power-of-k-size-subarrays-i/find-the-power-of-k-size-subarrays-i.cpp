class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int n=nums.size();
        int n1=n-k+1;
        vector<int>res(n1,-1);
        if(k==1){
            return nums;
        }
        int count=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]+1==nums[i+1]){
                count++;
            }
            else{
                count=1;
            }
            if(count>=k){
                res[i-k+2]=nums[i+1];
            }
        }
        return res;


    }
};