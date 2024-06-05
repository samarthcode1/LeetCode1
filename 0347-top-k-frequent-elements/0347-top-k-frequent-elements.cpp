class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>v;
        map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        for(int i=0;i<nums.size();i++){
            if(k!=0){
                pair<int,int>p=pq.top();
                pq.pop();
                v.push_back(p.second);
                k--;
            }
            else{
                break;
            }
        }
        return v;
    }
};