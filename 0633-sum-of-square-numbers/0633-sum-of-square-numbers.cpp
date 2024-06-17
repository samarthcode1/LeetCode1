class Solution {
public:
    bool judgeSquareSum(int c) {
        int n=c;
        if(c==1){
            return true;
        }
        long long int l=0,r=sqrt(c);
        while(l<=r){
            long long int res=l*l+r*r;
            if(res==c){
                return true;
            }
            else if(res<c){
                l++;
            }
            else if(res>c){
                r--;
            }
        }
        return false;;
        // for(int i=1;i<n;i++){
        //     for(int j=2;j<n;j++){
        //         if(i*i+j*j==n){
        //             return true;
        //         }
        //     }
        // }
        // return false;
    }
};