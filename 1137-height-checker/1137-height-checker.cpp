class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>e(heights.begin(),heights.end());
        sort(e.begin(),e.end());
        int count=0;
        for(int i=0;i<e.size();i++){
            if(e[i]!=heights[i]){
                count++;
            }
        }
        return count;

    }
};