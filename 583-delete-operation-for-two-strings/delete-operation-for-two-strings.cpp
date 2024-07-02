class Solution {
public:
int find(int idx1,int idx2,vector<vector<int>>& dp,string& s,string& t){
        if(idx1<0 || idx2<0){
            return 0;
        }
        if(dp[idx1][idx2]!=-1){
            return dp[idx1][idx2];
        }
        if(s[idx1]==t[idx2]){
            return dp[idx1][idx2]=1+find(idx1-1,idx2-1,dp,s,t);
        }
        else{
            return dp[idx1][idx2]=max(find(idx1-1,idx2,dp,s,t),find(idx1,idx2-1,dp,s,t));
        }

    }
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int k=find(n-1,m-1,dp,word1,word2);
        return (n-k)+(m-k
        );
    }
};