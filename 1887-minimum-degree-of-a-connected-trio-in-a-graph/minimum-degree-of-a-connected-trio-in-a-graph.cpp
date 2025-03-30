class Solution {
public:
    int minTrioDegree(int n, vector<vector<int>>& edges) {
        vector<vector<int>>adj(n+1,vector<int>(n+1,0));
        vector<int>deg(n+1,0);
        for(auto& e:edges){
            int u=e[0],v=e[1];
            adj[u][v]=1;
            adj[v][u]=1;
            deg[u]++;
            deg[v]++;
        }
        int res=INT_MAX;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                for(int k=j+1;k<=n;k++){
                    if(adj[i][j]==1 && adj[j][k]==1 && adj[k][i]==1){
                        res=min(res,deg[i]+deg[j]+deg[k]-6);
                    }
                }
            }
            // cout<<endl;
        }
        if(res==INT_MAX){
            return -1;
        }
        return res;

    }
};