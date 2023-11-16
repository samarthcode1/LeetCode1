class Solution {
public:
    set<string>st;
    string ans="";
    void dfs(string s,int n){
        if(s.size()==n){
            if(st.find(s)==st.end() && ans == ""){
                ans=s;
            }
            return;
        }
        dfs(s+'0',n);
        dfs(s+'1',n);
        return;
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n=nums[0].size();
        for(auto i:nums){
            st.insert(i);
        } 
        string s="";   
        dfs(s,n);
        return ans;
    }
};