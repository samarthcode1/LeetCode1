class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int front=0;
        int maxLen=INT_MIN;
        int i;
        for(i=0;i<nums.size() && front<=i;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>k){
                maxLen=max(maxLen,i-front);
            }
            while(mp[nums[i]]>k){
                mp[nums[front]]--;
                front++;
            }
        }
        maxLen=max(maxLen,i-front);
        return maxLen;
    }
};