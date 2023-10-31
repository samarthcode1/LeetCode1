class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>arr;
        arr.push_back(pref[0]);
        for(int i=0;i<pref.size();i++){
            if(i+1<=pref.size()-1){
                int x=pref[i]^pref[i+1];
                arr.push_back(x);
            }
        }
        return arr;

    }
};