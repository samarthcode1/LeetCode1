class Solution {
public:
    int passThePillow(int n, int time) {
        int i=0;
        int round=time/(n-1);
        int extra=time%(n-1);
        if(round%2==0){
            return extra+1;
        }
        else{
            return 
            n-extra;
        }
        // return i;
    }
};