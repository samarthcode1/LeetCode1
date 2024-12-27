class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n=values.size();
        vector<int>v(n);
        v[0]=values[0];
        int maxi=0;
        for(int i=1;i<n;i++){
            int currRight=values[i]-i;
            maxi=max(maxi,v[i-1]+currRight);
            int left=values[i]+i;
            v[i]=max(v[i-1],left);
        }
        return maxi;
    }
};