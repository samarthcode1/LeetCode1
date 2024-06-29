class Solution {
public:
    void find(int curr,vector<vector<int>>& adj,unordered_set<int>& visi){
        visi.insert(curr);
        for(int i:adj[curr]){
            if(visi.find(i)==visi.end()){
                find(i,adj,visi);
            }
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n);
        for(auto i:edges){
            int from=i[0];
            int to=i[1];
            adj[to].push_back(from);
        }
        vector<vector<int>>an;
        for(int i=0;i<n;i++){
            vector<int>v;
            unordered_set<int>visi;
            find(i,adj,visi);
            for(int node=0;node<n;node++){
                if(node==i){
                    continue;
                }
                if(visi.find(node)!=visi.end()){
                    v.push_back(node);
                }
            }
            an.push_back(v);
        }
        return an;

    }
};