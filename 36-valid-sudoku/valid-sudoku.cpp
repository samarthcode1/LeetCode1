
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    for (int i = 0; i < 9; i++){
        unordered_set<char> mp1;
        for (int j = 0; j < 9; j++){
            if (board[i][j] != '.' && mp1.find(board[i][j]) != mp1.end()){
                return false;
            }
            mp1.insert(board[i][j]);
        }
    }
    for (int j = 0; j < 9; j++){
    unordered_set<char> mp2;
        for (int i = 0; i < 9; i++){
            if (board[i][j] != '.' && mp2.find(board[i][j]) != mp2.end()){
                return false;
            }
            mp2.insert(board[i][j]);
        }
    }
    vector<unordered_set<char>> mp3(9);
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            int loc = (i / 3) * 3 + j / 3;
            if (board[i][j] != '.' && mp3[loc].find(board[i][j]) != mp3[loc].end()){
                return false;
            }
            mp3[loc].insert(board[i][j]);
        }
    }
    return true;

    }
};