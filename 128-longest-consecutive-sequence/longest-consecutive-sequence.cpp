class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>st;
        if(n==0){
            return 0;
        }
        for(auto i:nums){
            st.insert(i);
        }
        int count=1;
        int maxi=INT_MIN;
        for(auto i:st){
            if(st.find(i-1)==st.end()){
                int x=i;
                count=0;
                while(st.find(x)!=st.end()){
                    count++;
                    x++;
                }
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};