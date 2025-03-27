class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int maxi=INT_MIN;
        int count=1;
        int n=nums.size();
        if(n==0){
            return 0;
        }
        for(auto i:nums){
            st.insert(i);
        }
        for(auto i:st){
            if(st.find(i-1)==st.end()){
                int num=i;
                count=1;
                while(st.find(num+1)!=st.end()){
                    count++;
                    num++;
                }
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};