class Solution {
public:
    int minSwaps(string s) {
        int count=0;
        int o=0,c=0;
        stack<char>st;
        if(s.length()%2==1){
            return -1;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='['){
                st.push(s[i]);
            }
            else{
                if(!st.empty() && st.top()=='['){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }
        while(!st.empty()){
            if(st.top()=='['){
                o++;
            }
            else{
                c++;
            }
            st.pop();
        }
        int result=(o+1)/2+(c+1)/2;
        return result/2;

    }
};