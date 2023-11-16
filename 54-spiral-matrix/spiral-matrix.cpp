class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int>v;
        int row_size=matrix.size();
        int column_size =matrix[0].size();
        int spiral_length =0;
        int first_row=0;
        int first_column=0;
        int las_row=row_size-1;
        int last_column=column_size-1;
        int matrix_size =row_size*column_size;
        
        while(matrix_size>0)
        {
            for(int i=first_column;spiral_length<matrix_size && i<=last_column; i++)
            {
                v.push_back(matrix[first_row][i]);
                matrix_size--;
            }
            first_row++;
            
            for(int i=first_row;spiral_length<matrix_size && i<=las_row; i++)
            {
                v.push_back(matrix[i][last_column]);
                matrix_size--;
            }
            last_column--;
            
            for(int i=last_column;spiral_length<matrix_size && i>=first_column; i--)
            {
                v.push_back(matrix[las_row][i]);
                matrix_size--;
            }
            las_row--;
            
            for(int i=las_row;spiral_length<matrix_size && i>=first_row; i--)
            {
                v.push_back(matrix[i][first_column]);
                matrix_size--;
            }
            first_column++;
        }
        return v;
    }
};