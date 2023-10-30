static int speedup = []() {
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
 cout.tie(0);
 return 0;
}();

class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> heap;
        heap.push({nums[0],0});
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            while(i-heap.top().second>k){
                heap.pop();
            }
            int curr=max(0,heap.top().first)+nums[i];
            sum=max(sum,curr);
            heap.push({curr,i});
        }
        return sum;

    }
};