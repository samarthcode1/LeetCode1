class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ana;
        // vector<string>v;
        // unordered_map<string,string>mp;
        // for(auto i:strs){
        //     string s=i;
        //     sort(s.begin(),s.end());
        //     mp[s]++;
        // }

        unordered_map<string,vector<string>>mp;
        // if(strs==NULL){
        //     return ana;
        // }
        int n=strs.size();
        for(auto i:strs){
            string s=i;
            sort(s.begin(),s.end());
            mp[s].push_back(i);
        }
        for(auto &i:mp){
            ana.push_back(i.second);
        }
        return ana;



    }
};