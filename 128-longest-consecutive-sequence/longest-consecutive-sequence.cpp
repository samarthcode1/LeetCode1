class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        // sort(nums.begin(),nums.end());
        int count=0;
        for(auto i:nums){
            st.insert(i);
        }
        for(auto i:st){
            cout<<i<<" ";
        }
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i]-1)==st.end()){
                int val=nums[i];
                while(st.find(val)!=st.end()){
                    val++;
                }
                count=max(count,val-nums[i]);
            }
            // if(st.find(nums[i]-1)!=st.end()){
            //     count++;
            //     cout<<"Found -1: "<<nums[i]-1<<endl;
            // }
            // else if(st.find(nums[i]+1)!=st.end()){
            //     count++;
            //     cout<<"Found +1: "<<nums[i]+1<<endl;
            // }
        }
        return count;
    }
};