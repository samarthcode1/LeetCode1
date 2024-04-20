class Solution {
public:
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    bool bfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j, int m, int n){
        grid2[i][j] = 0;
        queue<pair<int,int>>q;
        bool curr = true;
        q.push({i,j});
        while(!q.empty()){
            pair p=q.front();
            int x = p.first;
            int y = p.second;
            q.pop();
            if(grid1[x][y]==0){
                curr = false;
            }
            for(int k=0;k<4;k++){
                int nx=x+dx[k];
                int ny=y+dy[k];
                if(nx>=0 && nx<m && ny>=0 && ny<n && grid2[nx][ny]==1){
                    grid2[nx][ny]=0;
                    q.push({nx,ny});
                }
            }
            // if(x+1<m and grid2[x+1][y]==1){
            //     grid2[x+1][y] = 0;
            //      q.push({x+1,y});
            // }
            // if(y+1<n and grid2[x][y+1]==1){
            //     grid2[x][y+1] = 0;
            //     q.push({x,y+1});
            // }
            // if(x-1>=0 and grid2[x-1][y]==1){
            //     grid2[x-1][y] = 0;
            //     q.push({x-1,y});
            // }
            // if(y-1>=0 and grid2[x][y-1]==1){
            //     grid2[x][y-1] = 0;
            //     q.push({x,y-1});
            // }
        }
        return curr;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2){
        int m = grid1.size();
        int n = grid1[0].size();
        int count = 0;
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(grid2[i][j]==1 && bfs(grid1,grid2,i,j,m,n)){
                    count++;
                }
            }
        }
        return count;
    }
};