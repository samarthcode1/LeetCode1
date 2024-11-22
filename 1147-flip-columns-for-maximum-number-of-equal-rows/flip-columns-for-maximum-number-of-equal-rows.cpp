class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string,int>mp;
        for(auto i:matrix){
            string str="";
            for(int col=0;col<i.size();col++){
                if(i[0]==i[col]){
                    str+="T";
                }
                else{
                    str+="F";
                }
            }
            mp[str]++;
        }
        int maxFreq=0;
        for(auto i:mp){
            maxFreq=max(i.second,maxFreq);
        }
        return maxFreq;

    }
};
