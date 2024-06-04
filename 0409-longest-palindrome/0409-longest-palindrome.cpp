class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>mp;
        int count=0;
        for(auto i:s){
            mp[i]++;
            if(mp[i]%2==1){
                count++;
            }
            else{
                count--;
            }
        }
        if(count>0){
            return s.length()-count+1;
        }
        else{
            return s.length();
        }
    }
};