class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>pq;
        for(auto i:nums){
            pq.push(i);
        }
        int val;
        for(int i=0;i<nums.size();i++){
            if(k!=0){
                val=pq.top();
                pq.pop();
                k--;
            }
            else{
                break;
            }
        }
        return val;
    }
};