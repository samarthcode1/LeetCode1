class Solution {
public:
    // int bfs(vector<vector<int>>& grid,int x,int y,int m,int n){
    //     queue<pair<int,int>>q;
    //     q.push({x,y});
    //     int count=0;
    //     while(!q.empty()){
    //         pair<int,int> p=q.front();
    //         q.pop();
    //         int i=p.first;
    //         int j=p.second;
    //         count++;
    //         if(i-1>=0 && grid[i-1][j]==1){

    //         }
    //     }
    // }
    int bfs(vector<vector<int>>& grid,int &x,int &y,int &m,int &n){
        queue<pair<int,int>>q;
        q.push({x,y});
        int count=0;
        while(!q.empty()){
            pair p=q.front();
            q.pop();
            int i=p.first;
            int j=p.second;
            count++;
            if(i-1>=0 && grid[i-1][j]==1){
                grid[i-1][j]=-1;
                q.push({i-1,j});
            }
            if(j-1>=0 && grid[i][j-1]==1){
                grid[i][j-1]=-1;
                q.push({i,j-1});
            }
            if(i+1<m && grid[i+1][j]==1){
                grid[i+1][j]=-1;
                q.push({i+1,j});
            }
            if(j+1<n && grid[i][j+1]==1){
                grid[i][j+1]=-1;
                q.push({i,j+1});
            }
        }
        return count;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int area=0;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    grid[i][j]=-1;
                    int count=bfs(grid,i,j,m,n);
                    area=max(area,count);
                }
            }
        }
        return area;
    }
};