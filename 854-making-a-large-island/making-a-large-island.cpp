class Solution {
public:
    int check(vector<vector<int>>& grid,int flag,int i,int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid.size() || grid[i][j]!=1){
            return 0;
        }
        grid[i][j]=flag;
        return 1+check(grid,flag,i+1,j)+check(grid,flag,i-1,j)+check(grid,flag,i,j+1)+check(grid,flag,i,j-1);
    }
    int largestIsland(vector<vector<int>>& grid) {
        unordered_map<int,int>mp;
        int flag=2;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                if(grid[i][j]==1){
                    mp[flag]=check(grid,flag,i,j);
                    flag++;
                }
            }
        }
        if(mp.size()==0){
            return 1;
        }
        int n=grid.size();
        if(mp.size()==1){
            flag--;
            if(n*n==mp[flag]){
                return mp[flag];
            } 
            else{
                return mp[flag]+1;
            }
        }
        int maxi=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    int curr=1;
                    unordered_set<int>st;
                    if(i+1<n && grid[i+1][j]>1){
                        st.insert(grid[i+1][j]);
                    }
                    if(i-1>=0 && grid[i-1][j]>1){
                        st.insert(grid[i-1][j]);
                    }
                    if(j+1<n && grid[i][j+1]>1){
                        st.insert(grid[i][j+1]);
                    }
                    if(j-1>=0 && grid[i][j-1]>1){
                        st.insert(grid[i][j-1]);
                    }
                    for(int it:st){
                        curr+=mp[it];
                    }
                    maxi=max(maxi,curr);
                }
            }
        }
        return maxi;

    }
};