class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        // sort(hand.begin(),hand.end());
        if(hand.size()%groupSize!=0){
            return false;
        }
        map<int,int>mp;
        for(auto i:hand){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second==0){
                continue;
            }
            int count=i.second;
            for(int j=0;j<groupSize;j++){
                if(!mp.count(i.first+j) || mp[i.first+j]<count){
                    return false;
                }
                mp[i.first+j]-=count;
            }
        }
        return true;


    }
};