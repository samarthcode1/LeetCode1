class Solution {
public:
    int dX[2]={0,1};
    int dY[2]={1,0};
    vector<int> bfs(vector<vector<int>>& land,int &i,int &j,int &m,int &n){
        queue<pair<int,int>>q;
        q.push({i,j});
        land[i][j]=INT_MAX;
        vector<int>v={i,j};
        pair<int,int>prev;
        while(!q.empty()){
            pair p=q.front();
            q.pop();
            prev=p;
            for(int k=0;k<2;k++){
                int x=dX[k]+p.first;
                int y=dY[k]+p.second;
                if(x>=0 && x<m && y>=0 && y<n && land[x][y]==1){
                    land[x][y]=INT_MAX;
                    q.push({x,y});
                }
            }
        }
        v.push_back(prev.first);
        v.push_back(prev.second);
        return v;
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>>v;
        int m=land.size();
        int n=land[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(land[i][j]==1){
                    vector<int>v1=bfs(land,i,j,m,n);
                    v.push_back(v1);
                }
            }
        }
        return v;
    }
};