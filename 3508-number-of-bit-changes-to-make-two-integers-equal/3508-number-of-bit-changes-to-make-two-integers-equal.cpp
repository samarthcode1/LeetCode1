class Solution {
public:
    int popcount(int n){
        int count=0;
        while(n){
            count+=n&1;
            n>>=1;
        }
        return count;
    }
    int minChanges(int n, int k) {
        k=k^n;
        int count=popcount(k);
        k&=n;
        if(count==popcount(k)){
            return count;
        }
        return -1;
    }
};