class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        unordered_map<char,int>mp1,mp2;
        for(auto i:s){
            mp1[i]++;
        }
        for(auto i:t){
            mp2[i]++;
        }
        for(auto i:mp1){
            cout<<i.first<<" "<<i.second<<endl;
        }
        cout<<endl;
        for(auto i:mp2){
            cout<<i.first<<" "<<i.second<<endl;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]==t[i]){
                if(mp1[s[i]]!=mp2[t[i]]){
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};