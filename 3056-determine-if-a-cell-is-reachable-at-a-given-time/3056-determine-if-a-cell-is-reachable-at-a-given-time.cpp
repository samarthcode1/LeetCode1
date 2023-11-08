class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int maxi=max(abs(sx-fx),abs(fy-sy));
        if(sx==fx && sy==fy && t==1){
            return false;
        }
        if(t>=maxi){
            return true;
        }
        return false;

    }
};