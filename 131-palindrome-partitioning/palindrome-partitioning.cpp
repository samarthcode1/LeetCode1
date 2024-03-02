class Solution {
public:
    bool isPalindrome(string s, int start, int end) {
        while (start <= end) {
            if (s[start] != s[end]){
                return false;
            }
            start++,end--;
        }
        return true;
    }
    void palin(vector<vector<string>>& pal,vector<string>& v,int ind,string s){
        if(ind==s.size()){
            pal.push_back(v);
            return;
        }
        for(int i=ind;i<s.size();i++){
            if(isPalindrome(s,ind,i)){
                v.push_back(s.substr(ind,i-ind+1));
                palin(pal,v,i+1,s);
                v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>pal;
        vector<string>v;
        palin(pal,v,0,s);
        return pal;
    }
};