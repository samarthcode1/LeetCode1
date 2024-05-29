class Solution {
public:
    // long long  toDecimal(string s){
    //     long long  n=s.size();
    //     long long  p=0,dec=0;
    //     for(long long i=n-1;i>=0;i--){
    //         if(s[i]=='1'){
    //             dec+=pow(2,p);
    //         }
    //         p++;
    //     }
    //     return dec;
    // }
    int numSteps(string s) {
        int n=s.size();
        int count=0;
        int c=0;
        for(int i=n-1;i>0;i--){
            if(((s[i]-'0')+c)%2){
                count+=2;
                c=1;
            }
            else{
                count++;
            }
        }
        return count+c;
        // long long  d=toDecimal(s);
        // cout<<d<<" ";
        // long long count=0;
        // while(d!=1){
        //     if(d%2==0){
        //         d=d/2;
        //     }
        //     else{
        //         d+=1;
        //     }
        //     count++;
        // }
        // return count;
    }
};