class Solution {
public:
    int reverse(int x) {
        int temp;
        long sum=0;
        if(x<0){
            temp=abs(x);
            while(temp!=0){
                sum=sum*10+(temp%10);
                temp=temp/10;
            }
            if(sum>INT_MAX || sum<INT_MIN){
                return 0;
            }
            return 0-sum;
        }
        else{
            temp=x;
            while(temp!=0){
                sum=sum*10+(temp%10);
                temp=temp/10;
            }
            if(sum>INT_MAX || sum<INT_MIN){
                return 0;
            }
            return sum;
        }
    }
};