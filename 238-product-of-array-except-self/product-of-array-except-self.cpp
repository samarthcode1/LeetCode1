class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        int prefixPro=1;
        int zero=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                zero++;
                continue;
            }
            prefixPro*=nums[i];
        }
        if(zero>=2){
            fill(nums.begin(),nums.end(),0);
            return nums;
        }
        // int j=0;
        // if(zero==n){
        //     while(j<n){
        //         v[j]=0;
        //         j++;
        //     }
        //     return v;
        // }
        for(int i=0;i<n;i++){
            if(zero==0){
                nums[i]=prefixPro/nums[i];
            }
            else{
                if(nums[i]==0){
                    nums[i]=prefixPro;
                }
                else{
                    nums[i]=0;
                }
            }
        }
        // cout<<prefixPro;
        return nums;
        
    }
};