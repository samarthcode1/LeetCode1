class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int total=0,count=0;
        queue<pair<int,int>>q;
        int dx[4]={-1,1,0,0};
        int dy[4]={0,0,1,-1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]!=0){
                    total++;
                }
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }
        int mini=0;
        while(!q.empty()){
            int size=q.size();
            count+=size;
            while(size--){
                auto p=q.front();
                q.pop();
                int x=p.first;
                int y=p.second;
                for(int k=0;k<4;k++){
                    int X=x+dx[k];
                    int Y=y+dy[k];
                    if(X<0 || Y<0 || X>=n || Y>=m || grid[X][Y]!=1){
                        continue;
                    }
                    grid[X][Y]=2;
                    q.push({X,Y});
                }
            }
            if(!q.empty()){
                mini++;
            }
        }
        if(total==count){
            return mini;
        }
        return -1;
    }
};