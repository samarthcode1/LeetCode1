class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end(),greater<int>());
        int sum=0;
        for(auto a:apple){
            sum+=a;
        }
        int i;
        for(i=0;i<capacity.size() && sum>0 ;i++){
            sum-=capacity[i];
        }
        return i;
    }
};