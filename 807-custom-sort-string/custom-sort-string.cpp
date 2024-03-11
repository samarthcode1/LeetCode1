class Solution {
public:
    string customSortString(string order, string s) {
        string str="";
        unordered_map<char,int>mp;
        for(char i:s){
            mp[i]++;
        }
        for(char c:order){
            if(mp.find(c)!=mp.end()){
                while(mp[c]-->0){
                    str+=c;
                }
            }
        }
    
        for(auto i:mp){
            while(i.second-->0){
                str+=i.first;
            }
        }
        return str;
    }
};
