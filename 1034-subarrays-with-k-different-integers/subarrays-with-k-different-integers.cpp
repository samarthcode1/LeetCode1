class Solution {
public:
    int check(vector<int>& nums, int k){
        int count=0;
        unordered_map<int,int>mp;
        int front=0;
        int end=0;
        int n= nums.size();
        while(end<n){
            mp[nums[end]]++;
            while(mp.size()>k){
                mp[nums[front]]--;
                if(mp[nums[front]]==0){
                    mp.erase(nums[front]);
                }
                front++;
            }
            count+=(end-front+1);
            end++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return check(nums,k)-check(nums,k-1);
    }
};