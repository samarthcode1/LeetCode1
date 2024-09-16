class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n=timePoints.size();
        vector<int>minu(n);
        for(int i=0;i<n;i++){
            int h=stoi(timePoints[i].substr(0,2));
            int m=stoi(timePoints[i].substr(3));
            minu[i]=h*60+m;
        }
        int mini=INT_MAX;
        sort(minu.begin(),minu.end());
        for(int i=0;i<minu.size()-1;i++){
            mini=min(mini,minu[i+1]-minu[i]);
        }
        return min(mini,24*60-minu[n-1]+minu[0]);
    }
};