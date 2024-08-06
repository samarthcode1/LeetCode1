class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>mp;
        // for(auto c:word){
        //     mp[c]++;
        // }
        vector<int>v(26);
        for(auto i:word){
            v[i-'a']++;
        }
        // for(auto i:mp){
        //     v.push_back(i.second);
        // }
        sort(v.begin(),v.end(),greater<int>());
        int count=0;
        int distinct=0;
        for(int i=0;i<v.size();i++){
            count+=v[i]*(1+distinct/8);
            distinct++;
        }
        return count;
    }
};