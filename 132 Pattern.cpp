class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int>st;
        // int count=1;
        int third=INT_MIN;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<third)
            {
                return true;
            }
            while(!st.empty() && st.top()<nums[i]){
                third=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        // st.push(nums[0]);
        // int flag=0;
        // for(int i=0;i<nums.size();i++){
        //     int j=i+1;
        //     int k=j+1;
        //     if(nums[i]<nums[j]){
        //         if(nums[k]>nums[j]){
        //             continue;
        //         }
        //         else{
        //             flag=1;
        //         }
        //     }
        //     else{
        //         continue;
        //     }
        // }
        // if(flag==1){
        //     return true;
        // }
        return false;
    }
};