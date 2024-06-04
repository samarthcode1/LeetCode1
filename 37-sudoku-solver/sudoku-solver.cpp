class Solution {
public:
    bool safe(vector<vector<char>>& board,char ch,int r,int c){
        for(int i=0;i<9;i++){
            if(board[i][c]==ch){
                return false;
            }
            if(board[r][i]==ch){
                return false;
            }
            if(board[3*(r/3)+i/3][3*(c/3)+i%3]==ch){
                return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>& board){
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]=='.'){
                    for(char c='1';c<='9';c++){
                        if(safe(board,c,i,j)){
                            board[i][j]=c;
                            if(solve(board)==true){
                                return true;
                            }
                            else{
                                board[i][j]='.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};