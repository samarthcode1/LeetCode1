class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left==0 && right==0){
            return 0;
        }
        if(left==right){
            return left;
        }
        int count=0;
        while(left!=right){
            left>>=1;
            right>>=1;
            count++;
        }
        return left<<count;
    }
};