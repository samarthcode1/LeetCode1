class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!= word2.size()){
            return false;
        }
        // sort(word1.begin(),word1.end());
        // sort(word2.begin(),word2.end());
        unordered_map<char,int>mp1,mp2;
        for(auto i:word1){
            mp1[i]++;
        }
        for(auto i:word2){
            mp2[i]++;
        }
        vector<int>v1,v2;
        set<int>s1,s2;
        for(auto i:mp1){
            s1.insert(i.first);
        }
        for(auto i:mp2){
            s2.insert(i.first);
        }
        if(s1!=s2){
            return false;
        }
        for(auto i:mp1){
            v1.push_back(i.second);
        }
        for(auto i:mp2){
            v2.push_back(i.second);
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]){
                return false;
            }
        }
        return true;
    }
};