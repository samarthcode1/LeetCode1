class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string>repeat;
        for(int i=0;i<paths.size();i++){
            repeat.insert(paths[i][0]);
        }
        for(int i=0;i<paths.size();i++){
            string s=paths[i][1];
            if(repeat.find(s)==repeat.end()){
                return s;
            }
        }
        return "";
    }
};