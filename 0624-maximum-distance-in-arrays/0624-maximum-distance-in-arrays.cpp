class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int mini=1e5;
        int maxi=-1e5;
        int diff=-1;
        for(int i=0;i<arrays.size();i++){
            int n=arrays[i].size();
            diff=max(diff,max(arrays[i][n-1]-mini,maxi-arrays[i][0]));
            mini=min(mini,arrays[i][0]);
            maxi=max(maxi,arrays[i][n-1]);
        }
        return diff;
    }
};