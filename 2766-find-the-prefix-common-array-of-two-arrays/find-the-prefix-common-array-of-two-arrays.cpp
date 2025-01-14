class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int>v(n),freq(n+1,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(++freq[A[i]]==2){
                count++;
            }
            if(++freq[B[i]]==2){
                count++;
            }
            v[i]=count;
        }
        return v;
    }
};