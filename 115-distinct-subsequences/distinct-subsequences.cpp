class Solution {
public:
    int find(int idx1,int idx2,vector<vector<int>>& dp,string s,string t){
        if(idx2<0){
            return 1;
        }
        if(idx1<0){
            return 0;
        }
        if(dp[idx1][idx2]!=-1){
            return dp[idx1][idx2];
        }
        int count=0;
        if(s[idx1]==t[idx2]){
            int nott=find(idx1-1,idx2-1,dp,s,t);
            int take=find(idx1-1,idx2,dp,s,t);
            count+=nott+take;
        }
        else{
            count+=find(idx1-1,idx2,dp,s,t);
        }
        return dp[idx1][idx2]=count;
    }
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return find(n-1,m-1,dp,s,t);
    }
};