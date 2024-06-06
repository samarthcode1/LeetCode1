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
            if(mp[i.first]>0){
                for(int j=1;j<groupSize;j++){
                    mp[i.first+j]-=mp[i.first];
                    if(mp[i.first+j]<0){
                        return false;
                    }
                }
            }
        }
        return true;


    }
};