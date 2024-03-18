class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b) {
        return a[1] < b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),cmp);
        // for(int i=0;i<points.size();i++){
        //     for(int j=0;j<points[0].size();j++){
        //         cout<<points[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        int count=0;
        int end=0;
        for(int i=0;i<points.size();i++){
            if(count==0 || points[i][0]>end){
                count++;
                end=points[i][1];
            }
        }
        return count;
        // vector<vector<int>>inter;
        // int i=1;
        // int count=1;
        // int n=points.size();
        // while(i<n && points[i-1][1]<points[i][0]){
        //     inter.push_back(points[i-1]);
        //     count++;
        //     i++;
        // }
        // vector<int>v;
        // v.push_back(points[i-1][0]);
        // v.push_back(points[i-1][1]);
        // while(i<n && points[i-1][0]<=v[1]){
        //     v[0]=min(v[0],points[i][0]);
        //     v[1]=max(v[1],points[i][1]);
        //     i++;
        // }
        // inter.push_back(v);
        
        // while(i<n){
        //     inter.push_back(points[i]);
        //     i++;
        // }
        // for(int i=0;i<inter.size();i++){
        //     for(int j=0;j<inter[0].size();j++){
        //         cout<<inter[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // return inter.size();
    }
};