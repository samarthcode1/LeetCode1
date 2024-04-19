class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>mp;
        for(int i=0;i<edges.size();i++){
            mp[edges[i][0]]++;
            mp[edges[i][1]]++;
        }
        for(auto i:mp){
            if(i.second==edges.size()){
                return i.first;
            }
        }     
        return -1;

    }
};