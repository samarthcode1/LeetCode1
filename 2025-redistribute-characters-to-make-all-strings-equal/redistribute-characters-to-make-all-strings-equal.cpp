class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int>mp;
        for(auto i:words){
            for(char c:i){
                mp[c]++;
            }
        }
        int n=words.size();
        for(auto [key,val]:mp){
            if(val%n!=0){
                return false;
            }
        }
        return true;
    }
};