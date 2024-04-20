class Solution {
public:
    int dX[4]={0,0,1,-1};
    int dY[4]={1,-1,0,0};
    bool bfs(vector<vector<char>>& grid,vector<vector<bool>>& vis,char ch,int i,int j,int m,int n){
        queue<vector<int>>q;
        q.push({i,j,i,j});
        while(!q.empty()){
            vector<int>v=q.front();
            q.pop();
            for(int k=0;k<4;k++){
                int x=dX[k]+v[0];
                int y=dY[k]+v[1];
                if(x>=0 && x<m && y>=0 && y<n && (x!=v[2] || y!=v[3])){
                    if(vis[x][y] && grid[x][y]==ch){
                        return true;
                    }
                    if(grid[x][y]==ch){
                        vis[x][y]=true;
                        q.push({x,y,v[0],v[1]});
                    }
                }
            }
        }
        return false;
    }
    bool containsCycle(vector<vector<char>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>>vis(m,vector<bool>(n,false));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j]&& bfs(grid,vis,grid[i][j],i,j,m,n)){
                    return true;
                }
            }
        }
        return false;
    }
};