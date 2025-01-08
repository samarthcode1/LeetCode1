class Solution {
public:
    bool isPalin(string s,int start,int end){
        while(start<=end){
            if(s[start]!=s[end]){
                return false;
            }
            start++,end--;
        }
        return true;
    }
    void check(int idx,vector<vector<string>>& ans, vector<string>& v,string& s){
        if(idx==s.size()){
            ans.push_back(v);
            return;
        }
        for(int i=idx;i<s.size();i++){
            if(isPalin(s,idx,i)){
                v.push_back(s.substr(idx,i-idx+1));
                check(i+1,ans,v,s);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>v;
        check(0,ans,v,s);
        return ans;
    }
};