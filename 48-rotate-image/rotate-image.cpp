class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // vector<vector<int>>& m1;
        int size = matrix.size();
        // transpose
        for(int i = 0; i<size; i++){
            for(int j = i+1; j<size; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // cout<<"Matrix is: "<<endl;
        // for(auto i: matrix){
        // for(auto j : i){
        // cout<<j<<" ";
        // }
        // cout<<endl;
        // }
        // cout<<endl;
        for(int i = 0; i<size; i++){
            int front = 0;
            int last = size-1;
            while(front<last){
                swap(matrix[i][front], matrix[i][last]);
                front++;
                last--;
            }
        }
    }
};