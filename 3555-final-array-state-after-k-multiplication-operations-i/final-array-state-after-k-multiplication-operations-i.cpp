class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        for(int i=0;i<k;i++){
            auto [x,j]=pq.top();
            pq.pop();
            pq.push({multiplier*x,j});
        }
        while(!pq.empty()){
            auto [x,i]=pq.top();
            pq.pop();
            nums[i]=x;
        }
        return nums;



    }
};