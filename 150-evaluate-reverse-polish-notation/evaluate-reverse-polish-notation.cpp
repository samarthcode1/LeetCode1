class Solution {
public:
    int convert(string &s){
        int val=0;
        for(int i=0;i<s.size();i++){
            val=val*10+(s[i]-'0');
        }
        return val;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0;i<tokens.size();i++){
            if(isdigit(tokens[i][0])){
                int temp=convert(tokens[i]);
                st.push(temp);
            }
            else if(tokens[i][0]=='-' && tokens[i].size()>1){
                string s=tokens[i].substr(1);
                int temp=convert(s);
                st.push(-temp);
            }
            else{
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                int sum=-1;
                if(tokens[i]=="+"){
                    sum=a+b;
                }
                else if(tokens[i]=="-"){
                    sum=b-a;
                }
                else if(tokens[i]=="*"){
                    sum=a*b;
                }
                else if(tokens[i]=="/"){
                    sum=b/a;
                }
                st.push(sum);
            }
        }
        return st.top();
    }
};