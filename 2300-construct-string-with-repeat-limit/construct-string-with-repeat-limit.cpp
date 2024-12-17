class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        priority_queue<char>pq;
        for(auto i:mp){
            char c=i.first;
            pq.push(c);
        }
        string res;
        while(!pq.empty()){
            char ch=pq.top();
            pq.pop();
            int count=mp[ch];
            int limit=min(count,repeatLimit);
            res.append(limit,ch);
            mp[ch]-=limit;
            if(mp[ch]>0 && !pq.empty()){
                char next=pq.top();
                pq.pop();
                res.push_back(next);
                mp[next]--;
                if(mp[next]>0){
                    pq.push(next);
                }
                pq.push(ch);
            }
        }
        return res;
    }
};