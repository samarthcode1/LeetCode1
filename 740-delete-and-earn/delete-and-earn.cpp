class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        int earn1=0,earn2=0;
        int total=0;
        vector<int>v;
        for(auto i:mp){
            v.push_back(i.first);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            int curr=v[i]*mp[v[i]];
            if(i>0 && v[i]==v[i-1]+1){
                int temp=earn2;
                earn2=max(curr+earn1,earn2);
                earn1=temp;
            }
            else{
                int temp=earn2;
                earn2+=curr;
                earn1=temp;
            }
        }
        return earn2;

    }
};