class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int start,end;
        // int i;
        vector<vector<int>>mer;
        for(int i=0;i<intervals.size();i++){
            start=intervals[i][0];
            end=intervals[i][1];
            while(i!=intervals.size()-1 && end>=intervals[i+1][0] ){
                end=max(end,intervals[i+1][1]);
                i++;
            }
            vector<int>v={start,end};
            mer.push_back(v);
        }
        return mer;
    }
};