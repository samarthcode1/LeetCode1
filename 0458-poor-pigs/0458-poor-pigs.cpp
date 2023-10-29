class Solution {
public:
int log(int a,int b){
    return log2(a)/log2(b);
}
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        if(buckets==1){
            return 0;
        }
        int t=minutesToTest/minutesToDie;
        int x=log(buckets-1,t+1)+1;
        return x;
    }
};