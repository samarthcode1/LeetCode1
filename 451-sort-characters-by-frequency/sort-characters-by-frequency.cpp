class Solution {
public:
    // static bool cmp(pair<char, int>& a, pair<char, int>& b) 
    // { 
    //     return a.second < b.second; 
    // }
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(auto c:s){
            mp[c]++;
        }
        string st="";
        priority_queue<pair<int,char>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        // sort(mp.begin(),mp.end(),cmp);
        while(!pq.empty())
        {
            pair<int,char>pa=pq.top();
            pq.pop();
            for(int i=0;i<pa.first;i++){
                st+=pa.second;
            }
        }
        return st;
    }
};