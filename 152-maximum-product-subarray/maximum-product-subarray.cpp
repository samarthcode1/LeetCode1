class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //TLE Approach-1
        // int product=nums[0];
        // for(int i=0;i<nums.size();i++){
        //     int next=nums[i];
        //     for(int j=i+1;j<nums.size();j++){
        //         product=max(product,next);
        //         next*=nums[j];
        //     }
        //     product=max(product,next);
        // }
        // return product;
    
        //Approach-2 Kadane's Algo
        int maxi=INT_MIN;
        int prod=1;
        for(int i=0;i<nums.size();i++){
            prod*=nums[i];
            maxi=max(prod,maxi);
            if(prod==0){
                prod=1;
            }
        }
        prod=1;
        for(int i=nums.size()-1;i>=0;i--){
            prod*=nums[i];
            maxi=max(prod,maxi);
            if(prod==0){
                prod=1;
            }
        }
        return maxi;
    }
};