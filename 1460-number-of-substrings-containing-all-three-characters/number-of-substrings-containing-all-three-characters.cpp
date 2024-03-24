class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        int start=0,end=0,count=0;
        while(end<n){
            mp[s[end]]++;
            while(mp['a']>=1 && mp['b']>=1 && mp['c']>=1){
                count+=n-end;
                mp[s[start]]--;
                start++;
            }
            end++;
        }
        return count;
    }
};