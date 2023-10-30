class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mp1;
        unordered_map<char,bool> mp2;
        for(int i=0;i<s.length();i++)
        {
            if(mp1.count(s[i]))
            {   
                if(mp1[s[i]] != t[i])
                  return false;
            }
            else{
                if(mp2.count(t[i]) && mp2[t[i]])
                  return false;
                else
                  mp1[s[i]] = t[i];
                  mp2[t[i]] = true;
            }
        }
        return true;
    }
};