class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int time=0;
        int i=0,j=0;
        int n=neededTime.size();
        while(j<n && i<n){
            int total=0,maxi=0;
            while(j<n && colors[i]==colors[j]){
                total+=neededTime[j];
                maxi=max(maxi,neededTime[j]);
                j++;
            }
            time+=total-maxi;
            i=j;
        }
        return time;
    }
};