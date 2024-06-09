class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int size = nums.size();
        unordered_map<int,int> mapping;
        mapping[0] = 1;
        int count = 0;
        int sum = 0;
        int rem = 0;
        for(int i = 0; i<size; i++){
            sum+= nums[i];
            int rem = sum % k;
            if(rem < 0){
                rem+= k;
            }
            if(mapping.count(rem) == 0){
                mapping[rem] = 1;
            }else{
                count+= mapping[rem];
                mapping[rem]++;
            }
        }
        return count;
    }
};