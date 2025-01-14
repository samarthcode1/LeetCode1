class Solution {
public:
    string longestPalindrome(string s) {
        string res="";
        int maxi=0;
        int n=s.size();
        for(int i=0;i<s.size();i++){
            int l=i,r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>maxi){
                    res=s.substr(l,r-l+1);
                    maxi=r-l+1;
                }
                l--,r++;
            }
            l=i,r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                if(r-l+1>maxi){
                    res=s.substr(l,r-l+1);
                    maxi=r-l+1;
                }
                l--,r++;
            }
        }
        return res;
    }
};