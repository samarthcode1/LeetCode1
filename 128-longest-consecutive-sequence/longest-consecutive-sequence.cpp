class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int count=0;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i]-1)==st.end()){
                int val=nums[i];
                while(st.find(val)!=st.end()){
                    val++;
                }
                count=max(count,val-nums[i]);
            }
        }
        return count;
    }
};