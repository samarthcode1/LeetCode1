class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.length()!=t.length()){
            return false;
        }
        else{
            if(s==t){
                return true;
            }
        }
        return false;
    }
};