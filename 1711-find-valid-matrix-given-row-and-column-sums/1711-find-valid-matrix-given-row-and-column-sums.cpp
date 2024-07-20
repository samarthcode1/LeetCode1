class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int r=rowSum.size();
        int c=colSum.size();
        vector<vector<int>>v(r,vector<int>(c,0));
        int val;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int mini=min(rowSum[i],colSum[j]);
                v[i][j]=mini;
                rowSum[i]-=mini;
                colSum[j]-=mini;
            }
        }
        return v;
        // cout<<mini<<" "<<val;
        // v[val][0]=mini;
        // for(int i=0;i<r;i++){
        //     for(int j=0;j<c;j++){
        //         if(v[i][j]==0){
        //             continue;
        //         }
        //         if((row[i]-val)<colSum[j])
        //     }
        // }
        return v;

    }
};