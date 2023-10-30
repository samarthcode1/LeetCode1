class Solution {
public:
int recursion(int n,int k){
    if(n==1){
        return 0;
    }
        
    int total=pow(2,(n-1));
    int half=total/2;
    if(k>half){
        return 1-kthGrammar(n,k-half);
    }
    return recursion(n-1,k);
}
    int kthGrammar(int n, int k) {
        return recursion(n,k);
    }
};