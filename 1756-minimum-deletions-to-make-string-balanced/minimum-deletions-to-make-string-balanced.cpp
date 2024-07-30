class Solution {
public:
    int minimumDeletions(string s) {
        // stack<char>st;
        // int count=0;
        // for(int i=0;i<s.size();i++){

        // }
        int a=0;
        for(char c:s){
            if(c=='a'){
                a++;
            }
        }
        int b=0;
        int count=INT_MAX;
        for(char c:s){
            if(c=='a'){
                a--;
            }
            count=min(count,a+b);
            if(c=='b'){
                b++;
            }
        }
        return count;
    }
};