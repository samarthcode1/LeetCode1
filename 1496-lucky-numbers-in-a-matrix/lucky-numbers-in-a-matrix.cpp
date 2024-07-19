class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        // vector<int>v;
        // vector<int>mr;
        // vector<int>mc;
        // for(int i=0;i<matrix.size();i++)
        // {
        //     mr.push_back(*min_element(matrix[i].begin(),matrix[i].end()));
        // }
        // for(int i=0;i<matrix.size();i++){

        // }
        // return mr;
        int row = INT_MIN;
        for (int i = 0; i < matrix.size(); i++) {
            int rm = INT_MAX;
            for (int j = 0; j < matrix[0].size(); j++) {
                rm = min(rm, matrix[i][j]);
            }
            row = max(row, rm);
        }
        int col = INT_MAX;
        for (int i = 0; i < matrix[0].size(); i++) {
            int cm = INT_MIN;
            for (int j = 0; j < matrix.size(); j++) {
                cm = max(cm, matrix[j][i]);
            }
            col = min(cm, col);
        }
        if(col==row){
            return {col};
        }
        return {};
    }
};