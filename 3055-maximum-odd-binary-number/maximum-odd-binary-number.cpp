class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        vector<char>v(n);
        string str;
        int one=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                one++;
            }
        }
        
        one--;
        for(int i=0;i<n-1;i++){
            if(one>0){
                v[i]='1';
                one--;
            }
            else{
                v[i]='0';
            }
        }
        v[n-1]+='1';
        for(auto i:v){
            str+=i;
        }
        return str;
        
    }
};