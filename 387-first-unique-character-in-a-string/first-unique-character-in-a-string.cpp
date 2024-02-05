class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]==1)
            {
                return i;
            }
        }
        // for(auto i:mp){
        //     if(i.second()==1){
        //         return i;
        //     }
        // }
        return -1;
    }
};