class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<long long>presum(n+1,0);
        for(int i=1;i<=n;i++){
            presum[i]=presum[i-1]+nums[i-1];
        }
        deque<int>q;
        int ans=INT_MAX;
        for(int i=0;i<=n;i++){
            while(!q.empty() && presum[i]-presum[q.front()]>=k){
                ans=min(ans,i-q.front());
                q.pop_front();
            }
            while(!q.empty() && presum[i]<=presum[q.back()]){
                q.pop_back();
            }
            q.push_back(i);
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};