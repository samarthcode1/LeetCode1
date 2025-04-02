class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long val=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    long long temp=(long long) (nums[i]-nums[j])*nums[k];
                    val=max(val,temp);
                }
            }
        }
        if(val==0){
            return 0;
        }
        return val;
    }
};