class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int count=0;
        if(s1==s2){
            return true;
        }
        // unordered_map<char,int>mp;
        // for(auto i:s1){
        //     mp[i]++;
        // }
        // for(auto i:s2){
        //     mp[i]++;
        // }
        int fd=0,sd=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                count++;
                if(count>2){
                    return false;
                }
                else if(count==1){
                    fd=i;
                }
                else{
                    sd=i;
                }
            }
        }
        return s1[fd]==s2[sd] && s1[sd]==s2[fd];
    }
};