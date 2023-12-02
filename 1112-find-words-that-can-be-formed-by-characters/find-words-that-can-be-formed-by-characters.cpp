class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>mp;
        for(auto c:chars){
            mp[c]++;
        }
        int ans=0;
        for(auto s:words){
            unordered_map<char,int>mp1;
            for(char c:s){
                mp1[c]++;
            }
            bool check=true;
            for(auto& [c,freq] : mp1){
                if(mp[c]<freq){
                    check=false;
                    break;
                }
            }
            if(check){
                ans+=s.size();
            }
        }
        return ans;

    }
};