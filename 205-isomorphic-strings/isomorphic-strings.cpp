class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,int>mp1,mp2;
        if(s.size()!=t.size()){
            return false;
        }
        // for(auto c:s){
        //     mp1[c]++;
        // }
        // for(auto c:t){
        //     mp2[c]++;
        // }
        for(int i=0;i<s.size();i++){
            if(mp1[s[i]]!=mp2[t[i]]){
                return false;
            }
            mp1[s[i]]=i+1;
            mp2[t[i]]=i+1;
        }
        return true;
    }
};