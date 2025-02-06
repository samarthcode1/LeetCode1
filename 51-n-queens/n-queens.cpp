class Solution {
public:
    bool isSafe(int col,int n,vector<string>& v,int row){
        int r=row,c=col;
        while(r>=0 && c>=0){
            if(v[r][c]=='Q'){
                return false;
            }
            r--,c--;
        }
        r=row,c=col;
        while(c>=0){
            if(v[r][c]=='Q'){
                return false;
            }
            c--;
        }
        r=row,c=col;
        while(r<=n-1 && c>=0){
            if(v[r][c]=='Q'){
                return false;
            }
            r++,c--;
        }
        return true;
    }
    void check(int col,int n,vector<string>& v,vector<vector<string>>& ans){
        if(col==n){
            ans.push_back(v);
            return;
        }
        for(int i=0;i<n;i++){
            if(isSafe(col,n,v,i)){
                v[i][col]='Q';
                check(col+1,n,v,ans);
                v[i][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>v(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            v[i]=s;
        }
        check(0,n,v,ans);
        return ans;
    }
};