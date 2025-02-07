class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int,int>col,ball;
        int n=queries.size();
        vector<int>v(n);
        for(int i=0;i<n;i++){
            if(ball.find(queries[i][0])!=ball.end()){
                int prev=ball[queries[i][0]];
                col[prev]--;
                if(col[prev]==0){
                    col.erase(prev);
                }
            }
            ball[queries[i][0]]=queries[i][1];
            col[queries[i][1]]++;
            v[i]=col.size();

        }
        return v;

    }
};