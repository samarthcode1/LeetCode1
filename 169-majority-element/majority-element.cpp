class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n=nums.size();
        // unordered_map<int,int>mp;
        // for(auto i:nums){
        //     mp[i]++;
        // }    
        // for(auto i:mp){
        //     if(i.second>n/2){
        //         return i.first;
        //     }
        // }
        // return 0;
        int count=0;
        int num=0;
        for(int i=0;i<nums.size();i++){
            if(count==0){
                num=nums[i];
                count=1;
            }
            else if(num==nums[i]){
                count++;
            }
            else{
                count--;
            }

        }
        return num;
    }
};