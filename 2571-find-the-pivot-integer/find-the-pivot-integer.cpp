class Solution {
public:
    int pivotInteger(int n) {
        int totalSum=n*(n+1)/2;
        int low=1;
        int high=n;
        if(n==1){
            return 1;
        }
        while(low<high){
            int mid=(low+high)/2;
            if(mid*mid-totalSum<0){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        if(low*low-totalSum==0){
            return low;
        }
        return -1;
    }
};