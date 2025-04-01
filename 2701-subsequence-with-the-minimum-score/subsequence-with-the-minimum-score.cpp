class Solution {
public:
    int minimumScore(string s, string t) {
        int m=s.size();
        int n=t.size();
        int mini=INT_MAX;
        vector<int>pre(m,0),suff(m,0);
        int j=0;
        for(int i=0;i<m && j<n;i++){
            if(s[i]==t[j]){
                pre[i]++;
                j++;
            }
            if(i>0){
                pre[i]+=pre[i-1];
            }
        }
        j=n-1;
        for(int i=m-1;i>=0 && j>=0;i--){
            if(s[i]==t[j]){
                suff[i]++;
                j--;
            }
            if(i<m-1){
                suff[i]+=suff[i+1];
            }
        }
        for(int i=0;i<m-1;i++){
            mini=min(mini,n-(pre[i]+suff[i+1]));
        }
        mini=min(mini,n-(pre[m-1]));
        mini=min(mini,n-suff[0]);
        return max(mini,0);
    }
};