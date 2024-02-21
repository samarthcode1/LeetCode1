class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> result;
        if(numRows == 0){
            return result;
        }
        vector<int> r1;
        r1.push_back(1);
        result.push_back(r1);
        if(numRows == 1){
            return result;
        }

        vector<int> r2;
        r2.push_back(1);
        r2.push_back(1);
        result.push_back(r2);
        if(numRows == 2){
            return result;
        }


        for(int i = 2;i<numRows; i++){
            vector<int> r;
            r.push_back(1);
            for(int j =1; j<i; j++){
                int num = result[i-1][j-1] + result[i-1][j];
                r.push_back(num);
            } 
            r.push_back(1);
            result.push_back(r);
        }
        return result;

    }
};