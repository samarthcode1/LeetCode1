class Solution {
public:
    int countHomogenous(string s) {
        int mod=1000000007;
        int ans=1;
        int currlen=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                currlen++;
            }
            else{
                currlen=1;
            }
            ans=(ans+currlen)%mod;
        }
        return ans;

    }
};