class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        vector<int>prefixsum(travel.size()+1,0);
        prefixsum[1]=travel[0];
        for(int i=1;i<travel.size();i++){
            prefixsum[i+1]=prefixsum[i]+travel[i];
        }
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(int i=0;i<garbage.size();i++){
            for(char c:garbage[i]){
                mp1[c]=i;
                mp2[c]++;
            }
        }
        char garbType[3]={'M','P','G'};
        int ans=0;
        for(char c:garbType){
            if(mp2[c]){
                ans+=prefixsum[mp1[c]]+mp2[c];
            }
        }
        return ans;

    }
};