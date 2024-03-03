class Solution {
public:
    bool isSafe(vector<string> v,int n,int col,int row){
        int r=row;
        int c=col;
        //up Diag
        while(r>=0 && c>=0){
            if(v[r][c]=='Q'){
                return false;
            }
            r--;
            c--;
        }
        //left
        r=row;
        c=col;
        while(c>=0){
            if(v[r][c]=='Q'){
                return false;
            }
            c--;
        }
        //bottom dig
        r=row;
        c=col;
        while(r<=n-1 && c>=0){
            if(v[r][c]=='Q'){
                return false;
            }
            r++;
            c--;
        }
        return true;
    }
    void check(vector<string>& v,int n,int col,vector<vector<string>>& queen){
        if(n==col){
            queen.push_back(v);
            return;
        }
        for(int i=0;i<n;i++){
            if(isSafe(v,n,col,i)){
                v[i][col]='Q';
                check(v,n,col+1,queen);
                v[i][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>queen;
        vector<string>v(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            v[i]=s;
        }
        check(v,n,0,queen);
        return queen;
    }
};