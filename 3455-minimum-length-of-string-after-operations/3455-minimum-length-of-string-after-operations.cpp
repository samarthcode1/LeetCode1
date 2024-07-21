class Solution {
public:
    int minimumLength(string s) {
        int n=s.size();
        if(n<3){
            return n;
        }
        unordered_map<char,int>mp;
        for(auto i:s){
            mp[i]++;
        }
        int count=0;
        for(auto i:mp){
            int freq=i.second;
            if(freq%2){
                count+=freq-1;
            }
            else{
                count+=freq-2;
            }
        }
        return n-count;
    }
};