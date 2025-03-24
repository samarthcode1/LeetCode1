class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int ans=0;
        sort(meetings.begin(),meetings.end());
        ans+=meetings[0][0]-1;
        int prev=meetings[0][1];
        for(int i=1;i<meetings.size();i++){
            if(meetings[i][0]>prev){
                ans+=meetings[i][0]-prev-1;
            }
            prev=max(meetings[i][1],prev);
        }
        ans+=days-prev;
        return ans;
    }
};